#!/usr/bin/python
import sys
import os
import re
class function:
    def __init__(self,clsname,head):
        self.clsname=clsname
        self.status=None
        self.withHead=head
        self.re=re.compile(clsname)
        try:
            import os
            os.mkdir("dump")
        except:pass
        self.dump=os.path.join(os.getcwd(),'dump')
        self.source=os.path.join(self.dump,"%s.mm"%(clsname))
        self.source=open(self.source,"w+")
        self.source.write("@implementation %s\n"%(clsname))
        if self.withHead==True:
            self.__createhead(clsname)
        return
    def __createhead(self,clsname):
        self.head=open(os.path.join(self.dump,"%s.h"%(clsname)),"w+")
        if self.withHead==None:self.withHead=True
        self.writeHeader("@interface %s\n"%(clsname))
    def end(self):
        self.writeSource("@end\n")
        self.writeHeader("@end\n")
    def isClassN(self,s):
        try:
            if s[0]=='/' and s[1]=='/' and s[2]==' ':
                classname=s[3:]
                index=classname.find(' - ')
                if index<3:
                    raise
                s=classname[index+1:]
                classname=classname[0:index]
                # ret=self.re.findall(classname)
                # if len(ret)==0:
                #     raise
                if classname!=self.clsname:
                    raise
                c=0
                ret=[]
                for a in s:
                    if a==')':
                        if c>0:
                            a=")a%d"%(c+2)
                        c=c+1
                    ret.append(a)
                s="".join(ret)
                return  s
        except:
            return None
    def writeHeader(self,l):
        if self.withHead==None:
            self.__createhead(self.clsname)
        self.head.write(l)
        self.head.write("\n")

    def writeSource(self,l):
        print l
        l=l.replace("struct ","")
        self.source.write(l)
        self.source.write("\n")
    def parse(self,l):
        PARSER_NONE="PARSER_NONE"
        PARSER_NAME="PARSER_NAME"
        PARSER_BODY="PARSER_BODY"
        l=l.strip("\r\n")
        if self.status==None:
            l=self.isClassN(l)
            if l!=None:
                self.status=PARSER_NAME
                self.writeSource(l)
                self.writeHeader(l+";")
                return l
        if self.status==PARSER_NAME:
            self.status=PARSER_BODY
            return None
        if self.status==PARSER_BODY:
            if l.find('}')==0:
                self.status=None
            self.writeSource(l)
            return l


def readline(path,c=None,r=False):
    f=open(path)
    lines=f.readlines()
    f=function(c,r)
    for l in lines:
        ret=f.parse(l)
    f.end()


if __name__=="__main__":
    def runtest(f='/Users/zhujialai/devssd/root/mobilesafari/webui.c',c='WebUIBrowserLoadingController'):
        readline(f,c)
    # runtest()
    import getopt
    argv=sys.argv[1:]
    print argv
    f=None
    c=None
    r=None
    a=None
    try:
        opts, args = getopt.getopt(argv, "ahc:f:r:", ["help"])
    except getopt.GetoptError:
        sys.exit(2)
    print opts
    for opt, arg in opts:
        print opt,arg
        if opt in ("-h", "--help"):
            sys.exit()
        elif opt in ("-f", "--grammar"):
            f = arg
        elif opt in ("-c", "--grammar"):
            c = arg
        elif opt in ("-r", "--grammar"):
            r = arg
        elif opt in ("-a"):
            a="a"

    print f,c,r,a
    if c!=None:
        allclass=c.split(',')
        if len(allclass):
            for c in allclass:
                if len(c):
                    readline(f,c)
            exit(0)
        readline(f,c)
    elif r!=None:
        r=re.compile(r,re.IGNORECASE)
        dir=os.listdir(os.path.join(os.getcwd(),"include"))
        print  dir
        for d in dir:
            d=d.split('.')[0]
            if len(r.findall(d)):
                print d
                readline(f,d,False)
    elif a!=None:
        dir=os.listdir(os.path.join(os.getcwd(),"include"))
        print  dir
        for d in dir:
            d=d.split('.')[0]
            print d
            readline(f,d,True)
# readline("hook.c","UIWebViewWK")
