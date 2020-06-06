;Cree en programa que capture una cadena y luego
;convierta cada uno de los caracteres a letras mayúsculas.
(define (cadena)
    (define cad "")
    (define cadMayus "")
    (printf "Ingrese una cadena:  ")
	(set! cad (string-copy (read)))
    (set! cadMayus (string-upcase cad))
    (printf "\nLa cadena en mayusculas es: ~a" cadMayus)
)

(cadena)

;Construya un programa en racket que capture una cadena y almacene 
;en otra variable la cadena invertida.
(define (reverse)
    (define cad "")
    (define cadReverse "")
    (printf "Ingrese una cadena de caracteres: ")
 	(set! cad (read))
    (deifne tam (string-length cad))
    (for ([i (in-range 0 (string-length cad) 1)])
        (string-copy! cadReverse tam (string-ref cad i))
        (set! tam (- tam 1))
    )
    (printf "\nCADENA INVERTIDA: ")
	printf("\n~a" cadReverse)
)

(reverse)

;Cree un programa que analice cuantas letras may�suclas y 
;cuantas letras min�sculas tiene una cadena ingresada por
;el usuario. Nota: Puede usar ciclos anidados y codigo ASCII.
(define (cantidad)
    (define mayus 0)(define minus 0)
    (define cad "")
	(printf "Ingrese una cadena: ")
 	(set! cad (read))
    (for ([i (in-range 0 (string-length cad) 1)])
        (for ([j (in-range 65 90 1)])
            (if (= (char->integer (string-ref cad i)) j)
                (set! mayus (+ mayus 1))
            )
        )
        (for ([j (in-range 97 122 1)])
            (if (= (char->integer (string-ref cad i)) j)
                (set! minus (+ minus 1))
            )
        )
    )
    (printf "\nCantidad de Mayusculas: ~a." mayus)
	(printf "\nCantidad de Minusculas: ~a." minus)
)

(cantidad)

;Cree un programa en Racket que reciba una cadena de m�ximo 20
;caracteres escrita por el usuario, el programa debe contar
;cuantos n�meros, y espacios en blanco contiene dicha cadena.
;Nota: Una buena manera de realizar el ejercicio es usando el
;c�digo ASCII