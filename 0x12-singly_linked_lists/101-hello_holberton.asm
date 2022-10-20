0000000000001139 <main>:
    1139:       55                      push   rbp
    113d:       48 8d 05 c0 0e 00 00    lea    rax,[rip+0xec0]        # 2004 <_IO_stdin_used+0x4>
    1144:       48 89 c7                mov    rdi,rax
    1147:       e8 e4 fe ff ff          call   1030 <puts@plt>
    114c:       b8 00 00 00 00          mov    eax,0x0
    1151:       5d                      pop    rbp
    1152:       c3                      ret
    1153:       66 2e 0f 1f 84 00 00    cs nop WORD PTR [rax+rax*1+0x0]
    115a:       00 00 00 
    115d:       0f 1f 00                nop    DWORD PTR [rax]
