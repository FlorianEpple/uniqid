# uniqid

A unix c program, for generating uniqids (only run able on Darwin systems)

## usage

```shell
uid [[[-l|len] [-w|lower]] / [-u|uuid [-p|prefix]] / [-s|sign(def:low|mid|high) [-l|len]]]

> uid
> uid [[-l|len] [-w|lower]]
> uid [-u|uuid [-p|prefix]]
> uid [-s|sign(def:low|mid|high) [-l|len]]
```

## examples

### UID_HX16:

```shell
> uid
  25FE9C114ADD8F06
```

```shell
> uid -l 8
  4ADD8F06
```

### UID_HX16L:

```shell
> uid -w
  25fe9c114add8f06
```

```shell
> uid -w -l 8
  4add8f06
```

### UUID_36:

```shell
> uid -u
  5c814f8e-bdd8-414a-9f3c-d1aa98f502be
```

```shell
> uid -u -p "123456789abcdef"
  12345678-9abc-defa-9f3c-d1aa98f502be
```

### PSW

```shell
> uid -s low
  89RKDNE7
```

```shell
> uid -s mid
  DBiFV6LrmW
```

```shell
> uid -s high
  3_TzEgefPo-G
```

## charset

```c
# define CHARSET_LEGAL "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz$%_-"
# define CHARSET_HEX16 "0123456789ABCDEF"
# define CHARSET_HEX16_LOWER "0123456789abcdef"
# define CHARSET_PASSWORD_LOW "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# define CHARSET_PASSWORD_MIDDLE "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
# define CHARSET_PASSWORD_HIGH "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz$%_-"
# define CHARSET_UUID "0123456789abcdef"
```

## pattern

```c
# define PATTERN_UUID "********-****-****-****-************"
```
