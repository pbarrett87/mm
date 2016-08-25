# mm

I was able to make transient_lpf and transient_hpf objects from classes derived from the transformation abstract class in the fx.cpp file 
and the fx.h.   

I also included links to these in the metamorph_opcode.h and metamorph_opcode.cpp files. I also updated the csound parameter list to 
include two new k-rate variables, one for the frequency value for the LPF and another for the HPF. 

I put a comment like this beside everything I have done     // ******

The opcode built fine, but will not take the new parameters and thus not perform the new transformations 
