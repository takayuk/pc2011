#!/home/takayuk/local/bin/python
# encoding: utf-8
# coding: utf-8

import sys
sys.path.append(".")

import re
import tf_idf as tfidf

args=sys.argv

def to_wordurl(docs):
    words_dic={}
    tfdic=tf_idf.tf(docs)
    
    return tfdic.keys()

with file(args[1]) as url_file:
    urls=[url.strip("\n") for url in url_file.readlines()]

with file(args[2]) as text:
    docs=[doc.split(" ") for doc in [line.rstrip("\n") for line in text.readlines()]]

with file(args[3],"w") as out_file:



    #docs=[[re.sub("[^a-zA-Z]", "", word) for word in doc] for doc in docs]

#tfdic=tfidf.tf(docs)
#dfdic=tfidf.df(tfdic)

"""
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
"""

