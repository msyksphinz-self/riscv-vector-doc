#!/bin/ruby

inst_name = ''

while line = STDIN.gets
  if line =~ /^=== ([\w\.]+)/ then
    inst_name_tmp = $1
    if inst_name != '' then
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
      puts "\n\n"
    end
    inst_name = inst_name_tmp
  end
  print line
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
