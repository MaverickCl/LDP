#linea 2 guarda un valor en una variable de tipo int
#siempre guarda despues de un cambio (ctrl + S)
num1= int(input("dame un numero para comenzar: "))
#linea 4-6 depliega un menu
print("menu de opciones")
print("1) has una operacion ")
print("2) muestrame mi numero")
#linea 8 guarda una opcion del menu en una variable de tipo int
opcionMenu= int(input())
#ejecucion de la accion realizada mediante "if"

if opcionMenu == 1:
    print ("¿que operacion quiere hacer?")
    print ("1) division")
    print ("2) multiplicación")
    print ("3) suma")
    print ("4) resta")
    #opcionMenu= alternativa elejida primer menu/ opcion=alternativa elejida en menu de operaciones
    opcion=int(input())
    if opcion==1:
        print("deme un segundo numero para realizar la operacion")
        num2=int(input())
        if num2!=0: # el comando != es para decir que sea diferenta a ...
            resultado=num1/num2
            print(f"el resultado es: {resultado}") #para mostrar una variable se pone la "f" antes de las comillas en la cual se mostrará la variable
            pass # si no se pone de un comienzo muestra error pero al ponerlo se soluciona XD
        elif num2==0:
            print("la divion por cero no esta disponible aun")
            pass
      

        pass
    elif opcion==2:
        print("deme un segundo numero para realizar la operacion")
        num2=int(input())
        resultado=num2*num1
        print(f"el resultado es: {resultado}")

        
        pass
    elif opcion==3:
        print("deme un segundo numero para realizar la operacion")
        num2=int(input())
        resultado=num1+num2
        print(f"el resultado es: {resultado}")
        pass
    elif opcion==4:
        print("deme un segundo numero para realizar la operacion")
        num2=int(input())
        resultado=num1-num2
        print(f"el resultado es: {resultado}")
        pass
    else:
        print("reiniciando programa...")

        pass

elif opcionMenu==2:
    print(f"tu numero es: {num1} ")
    pass
else:
    print("elija una opcion valida")
    pass    
