
## r

The r command displays or modifies registers, floating-point registers, flags, pseudo-registers, and fixed-name aliases.


```
> .hh r
```

### View Register(s)

```
0:001> r
eax=7ffde000 ebx=00000000 ecx=00000000 edx=76fcec3b esi=00000000 edi=00000000
eip=76f63bec esp=0153faf8 ebp=0153fb24 iopl=0         nv up ei pl zr na pe nc
cs=001b  ss=0023  ds=0023  es=0023  fs=003b  gs=0000             efl=00000246
ntdll!DbgBreakPoint:
76f63bec cc              int     3
```

```
0:001> r eax
eax=7ffde000
```

Displays the floating-point registers. The "F" must be an uppercase letter. This option is equivalent to M 0x4.


```
0:001> rF
fpcw=027F: rn 53 puozdi  fpsw=0000: top=0 cc=0000 --------  fptw=FFFF
fopcode=0000  fpip=0000:00000000  fpdp=0000:00000000
st0= 0.000000000000000000000e+0000  st1= 0.000000000000000000000e+0000
st2= 0.000000000000000000000e+0000  st3= 0.000000000000000000000e+0000
st4= 0.000000000000000000000e+0000  st5= 0.000000000000000000000e+0000
st6= 0.000000000000000000000e+0000  st7= 0.000000000000000000000e+0000
ntdll!DbgBreakPoint:
76f63bec cc              int     3
```

```
0:001> rM 0x04
fpcw=027F: rn 53 puozdi  fpsw=0000: top=0 cc=0000 --------  fptw=FFFF
fopcode=0000  fpip=0000:00000000  fpdp=0000:00000000
st0= 0.000000000000000000000e+0000  st1= 0.000000000000000000000e+0000
st2= 0.000000000000000000000e+0000  st3= 0.000000000000000000000e+0000
st4= 0.000000000000000000000e+0000  st5= 0.000000000000000000000e+0000
st6= 0.000000000000000000000e+0000  st7= 0.000000000000000000000e+0000
ntdll!DbgBreakPoint:
76f63bec cc              int     3
```

Displays the SSE XMM registers. This option is equivalent to M 0x40.

```
0:001> rX
xmm0=0 0 0 0
xmm1=0 0 0 0
xmm2=0 0 0 0
xmm3=0 0 0 0
xmm4=0 0 0 0
xmm5=0 0 0 0
xmm6=0 0 0 0
xmm7=0 0 0 0
ntdll!DbgBreakPoint:
76f63bec cc              int     3
```

```
0:001> rM 0x40
xmm0=0 0 0 0
xmm1=0 0 0 0
xmm2=0 0 0 0
xmm3=0 0 0 0
xmm4=0 0 0 0
xmm5=0 0 0 0
xmm6=0 0 0 0
xmm7=0 0 0 0
ntdll!DbgBreakPoint:
76f63bec cc              int     3
```

Displays the AVX YMM registers. This option is equivalent to M 0x200.


Displays the AVX YMM integer registers. This option is equivalent to M 0x400.

Display eflags bits.  (of, df, if, tf, sf, zf, af, pf, cf, vip, vif)

```
0:001> r zf
zf=1
0:001> r sf
sf=0
0:001> r cf
cf=0
```


### Edit Register(s)

```
0:001> r eax=0xFFFFFFFF
0:001> r eax
eax=ffffffff
```


## References

- https://docs.microsoft.com/en-us/windows-hardware/drivers/debugger/r--registers-ß