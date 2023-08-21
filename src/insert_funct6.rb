#!/bin/ruby

inst_name = ''

while line = STDIN.gets
  if line =~ /^=== ([\w]+)/ then
    inst_name = $1
    print line
  elsif line =~ /attr: \'funct6\'/ then
    print line.gsub("attr: \'funct6\'", "attr: \'#{inst_name}\'")
  else
    print line
  end
end

puts "\n\n"
# puts "Spike Implementation::\n"
# puts "https://github.com/riscv-software-src/riscv-isa-sim/blob/master/riscv/insns/" + inst_name.gsub(/\./, '_') + ".h[]\n"
# puts "\n\n"
puts "Intrinsic Functions::"
puts "[%collapsible]"
puts "===="
puts "[source,c]"
puts "----"
puts "include::./intrinsic/" + inst_name.gsub(/\./,'_') + "_v_intrinsic.cpp[]"
puts "----"
puts "===="
