push   %rbp
mov    %rsp,%rbp
lea    0xec0(%rip),%rax        # 2004 <_IO_stdin_used+0x4>
mov    %rax,%rdi
call   1030 <puts@plt>
mov    $0x0,%eax
pop    %rbp
ret
cs nopw 0x0(%rax,%rax,1)
nopl   (%rax)

