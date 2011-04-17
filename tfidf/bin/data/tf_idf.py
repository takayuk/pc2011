# encoding: utf-8
# coding: utf-8

def tf(words):
  tfdic={}
  for word in words:
    for token in word:
      if not tfdic.has_key(token):
        tfdic.setdefault(token,1)
      else:
        tfdic[token]+=1
  
  return tfdic

def df(tfdic):
  dfdic={}
  for word in tfdic.keys():
    for selif in words:
      if word in selif:
        if not dfdic.has_key(word): dfdic.setdefault(word,0)
        dfdic[word]+=1
  
  return dfdic

