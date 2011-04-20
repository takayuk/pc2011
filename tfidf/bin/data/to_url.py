#!/home/takayuk/local/bin/python
# encoding: utf-8
# coding: utf-8

import sys
sys.path.append(".")

import re
import tf_idf

def usage(args):
    if not len(args) is 3:
        print("python " + args[0] + " [source filepath] [output(url) filepath]")
        exit()

args=sys.argv
usage(args)

def to_wordurl(docs):
    words_dic={}
    tfdic=tf_idf.tf(docs)
    return tfdic.keys()

with file(args[1]) as text:
    docs=[doc.split(" ") for doc in [line.rstrip("\n") for line in text.readlines()]]

docs=[[re.sub("[^a-zA-Z0-9]", "", word).lower() for word in doc] for doc in docs]

wordurl=to_wordurl(docs)
try:
    for i in xrange(wordurl.count("")):
        wordurl.remove("")
except ValueError:
    print(wordurl)

with file(args[2],"w") as url:
    url.write(str(len(wordurl))+"\n")
    
    for word in wordurl:
        url.write(word+"\n")

