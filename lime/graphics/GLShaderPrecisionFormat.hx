package lime.graphics;
#if js
typedef GLShaderPrecisionFormat = js.html.webgl.ShaderPrecisionFormat;
#else


typedef GLShaderPrecisionFormat = {
	
	rangeMin:Int,
	rangeMax:Int,
	precision:Int
	
};


#end