(define (function var)
	(cond
	    ((number? var) 1)
	    (else 0)
	)
)

(define (main)
    (function 12)
)