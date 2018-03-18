# define __TGMATH_BINARY_REAL_IMAG(Val1, Val2, Fct, Cfct) \
     (__extension__ (((sizeof (__real__ (Val1)) > sizeof (double) \
		       || sizeof (__real__ (Val2)) > sizeof (double))	  \
		      && __builtin_classify_type (__real__ (Val1)	      \
						  + __real__ (Val2)) == 8)    \
		     ? ((sizeof (__real__ (Val1)) == sizeof (Val1)	      \
			 && sizeof (__real__ (Val2)) == sizeof (Val2))	      \
			? (__typeof ((__tgmath_real_type (Val1)) 0	      \
				   + (__tgmath_real_type (Val2)) 0))	      \
			  __tgml(Fct) (Val1, Val2)			      \
			: (__typeof ((__tgmath_real_type (Val1)) 0	      \
				   + (__tgmath_real_type (Val2)) 0))	      \
			  __tgml(Cfct) (Val1, Val2))			      \
		     : (sizeof (__real__ (Val1)) == sizeof (double)	      \
			|| sizeof (__real__ (Val2)) == sizeof (double)	      \
			|| __builtin_classify_type (__real__ (Val1)) != 8     \
			|| __builtin_classify_type (__real__ (Val2)) != 8)    \
		     ? ((sizeof (__real__ (Val1)) == sizeof (Val1)	      \
			 && sizeof (__real__ (Val2)) == sizeof (Val2))	 \
			? (__typeof ((__tgmath_real_type (Val1)) 0	      \
				   + (__tgmath_real_type (Val2)) 0))	      \
			  Fct (Val1, Val2)				      \
			: (__typeof ((__tgmath_real_type (Val1)) 0	      \
				   + (__tgmath_real_type (Val2)) 0))	      \
			  Cfct (Val1, Val2))				      \
		     : ((sizeof (__real__ (Val1)) == sizeof (Val1)	  \
			 && sizeof (__real__ (Val2)) == sizeof (Val2))	  \
			? (__typeof ((__tgmath_real_type (Val1)) 0	      \
				   + (__tgmath_real_type (Val2)) 0))	      \
			  Fct##f (Val1, Val2)				      \
			: (__typeof ((__tgmath_real_type (Val1)) 0	      \
				   + (__tgmath_real_type (Val2)) 0))	      \
			  Cfct##f (Val1, Val2))))
