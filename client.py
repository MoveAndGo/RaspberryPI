import socket
import time
import sys

hote = "169.254.147.117" #"169.254.93.130" #"169.254.131.184" # "172.20.10.2" #"address ip du server"
port = 15001

def main(argv):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((hote, port))
    print("Connection on {}".format(port))
    
    # my = input("Enter command ")
    my = str(sys.argv[1])
    print("PYTHON ENVOIE :")
    print(my)
    # encode the message
    my_inp = my.encode('utf-8')

    # send request ti server
    s.sendall(my_inp)
    s.close()
    time.sleep(0.01)



if __name__ == "__main__":
   print("debut socket")
   main(sys.argv[1:])



