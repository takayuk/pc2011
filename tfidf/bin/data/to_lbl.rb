#!/home/takayuk/local/bin/ruby -Ku
# encoding: utf-8
# coding: utf-8

url=open(ARGV[0]).readlines.map{|v|v.chomp}
doc=open(ARGV[1]).readlines.map{|v|v.chomp}.map{|w|w.split(" ")}

open(ARGV[2],"w"){|file|
  file.puts "#{doc.size} #{url.size-1}"
  doc.each_with_index{|d, i|
    wlist=d.map{|v|
      url.index(v.gsub(/[^a-zA-Z0-9]/,"").downcase)
    }

    wdic=Hash.new(0)
    wlist.reject{|v|v=="" or v.nil?}.each{|w|wdic[w]+=1}
    buf=""
    wdic.each{|k,v| 
      p k if k.nil?
      buf+=" #{k}:#{v}"
    }
    file.puts "#{i+1} #{wdic.size}#{buf}"
  }
}

