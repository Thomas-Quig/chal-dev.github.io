#!/usr/bin/env python3

# Put your imports at the top
        
def print_flag():
  f = open('flag.txt')
  ret = f.read()
  f.close()
  print(ret)


def main():
  print("--== chal.dev pyskel file ==--\n")
  print_flag()
        
if __name__ == "__main__":
    main()