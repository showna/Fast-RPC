Este proyecto est� preparado para la versi�n RTI DDS 4.5f.

En Windows est� compilado contra boost-1.49.0.
Para compilar boost en 32-bits:
   bjam --toolset=msvc-10.0 --build-type=complete stage
Para compilar boost en 64-bits:
   bjam --toolset=msvc-9.0 address-model=64 --build-type=complete stage

Observaciones tenidas en cuenta al decidir si el n�mero de secuencia entra dentro de la clave:
- El n�mero de secuencia est� en la clave:
  + Por defecto el historial est� a uno, que es el valor adecuado.
- El n�mero de secuencia no est� en la clave:
  - Por defecto el historia est� a uno, y es necesario que se cambie a que guarde todo.


TODO
Que el numero de secuencia tambi�n est� en la clave: el objetivo es poder tener multiples servidores, y al tener
el historial a uno, solo recibir� el �ltimo, si los recibe a la vez (pensar en esto).
Registrar la instancia antes de enviar la respuesta (en el servidor)
Support for "long double"
Poner const cuando se pasa datos al usuario para que no los toque.
Crear comentarios al crear el codigo (ejemplo, descripci�n de par�metros de una funci�n como que par�metros son "in", "inout" o "out".