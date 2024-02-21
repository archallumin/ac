section .data
  msg1 db "<(o )___",
  msg2 db " ( \\_> /",
  msg3 db "  "~~~""

section .text
  global_start

_start:
  mov rax, 1
  mov rdi, 1
  mov rsi, msg1
  mov rsi, msg2
  mov rsi, msg3
  mov rdx, 12
  syscall
  mov rax, 60
  mov rdi, 0
  syscall