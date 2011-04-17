#!/usr/bin/env python
# encoding: utf-8
# coding: utf-8

# 途中で改行されているスクリプトを修正する.
def refine(script):
  
  import re
  # 文字列が途中で区切られているかのチェック.
  def at_end(doc):
    end=re.compile("[^a-zA-Z]")
    if end.match(doc[-1]) is None:
      return True
    else:
      return False

  docs_iter=iter(script)
  refined_script=[]
  
  buf=""
  while True:
    try:
      doc=next(docs_iter)

      if not at_end(doc) is True:
        refined_script.append((buf+" "+doc).strip(" "))
        buf=""
      else:
        buf+=" "+doc
    except StopIteration:
      break
  
  return refined_script

import sys
args=sys.argv

with file(args[1]) as text:
  script=[line.rstrip("\n") for line in text.readlines()]

ref=refine(script)

with file(args[2],"w") as reftext:
  for doc in ref:
    reftext.write(doc+"\n")

