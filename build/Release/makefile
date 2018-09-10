INC=-I./ -I../../../../Kore/Sources -I../../../../Kore/Backends/System/Linux/Sources -I../../../../Kore/Backends/System/POSIX/Sources -I../../../../Kore/Backends/Graphics4/OpenGL/Sources -I../../../../Kore/Backends/Graphics5/G5onG4/Sources -I../../../../Kore/Backends/Audio3/A3onA2/Sources 
LIB=-static-libgcc -static-libstdc++ -pthread -lasound -ldl -lGL -lX11 -lXinerama
DEF=-DKORE_G1 -DKORE_G2 -DKORE_G3 -DKORE_A1 -DKORE_A2 -DKORE_LINUX -DKORE_OPENGL -DKORE_POSIX -DKORE_G4 -DKORE_G5 -DKORE_G5ONG4 -DKORE_A3 

CFLAGS=
CPPFLAGS=
LinuxMouseHideExample: camera.o main.o meshobject.o objloader.o audio.o texttospeech.winrt.o glew.o computeimpl.o indexbufferimpl.o opengl.o openglwindow.o pipelinestateimpl.o rendertargetimpl.o shaderimpl.o shaderstoragebufferimpl.o texturearrayimpl.o textureimpl.o vertexbufferimpl.o vrinterface.o commandlist5impl.o constantbuffer5impl.o g5ong4.o indexbuffer5impl.o pipelinestate5impl.o rendertarget5impl.o shader5impl.o texture5impl.o vertexbuffer5impl.o display.o display_xrandr.o display_xinerama.o display_old.o sound.o system.o window.o gamepad.o mouse.o event.o mutex.o semaphore.o thread.o threadlocal.o error.o log.o codestyle.o error_.o log_.o system_.o audio_.o sound_.o soundstream.o stb_vorbis.o audio__.o audio___.o color.o graphics.o image.o graphics_.o kravur.o graphics__.o texture.o graphics___.o pipelinestate.o texture_.o texturearray.o commandlist.o constantbuffer.o graphics____.o pipelinestate_.o texture__.o bufferreader.o filereader.winrt.o filewriter.o reader.o writer.o lz4.o lz4frame.o lz4hc.o xxhash.o gamepad_.o keyboard.o mouse_.o pen.o sensor.o surface.o core.o quaternion.o random.o connection.o http.o socket.o cameraimage.o sensorstate.o vrpose.o vrposestate.o 
	g++  -O2 camera.o main.o meshobject.o objloader.o audio.o texttospeech.winrt.o glew.o computeimpl.o indexbufferimpl.o opengl.o openglwindow.o pipelinestateimpl.o rendertargetimpl.o shaderimpl.o shaderstoragebufferimpl.o texturearrayimpl.o textureimpl.o vertexbufferimpl.o vrinterface.o commandlist5impl.o constantbuffer5impl.o g5ong4.o indexbuffer5impl.o pipelinestate5impl.o rendertarget5impl.o shader5impl.o texture5impl.o vertexbuffer5impl.o display.o display_xrandr.o display_xinerama.o display_old.o sound.o system.o window.o gamepad.o mouse.o event.o mutex.o semaphore.o thread.o threadlocal.o error.o log.o codestyle.o error_.o log_.o system_.o audio_.o sound_.o soundstream.o stb_vorbis.o audio__.o audio___.o color.o graphics.o image.o graphics_.o kravur.o graphics__.o texture.o graphics___.o pipelinestate.o texture_.o texturearray.o commandlist.o constantbuffer.o graphics____.o pipelinestate_.o texture__.o bufferreader.o filereader.winrt.o filewriter.o reader.o writer.o lz4.o lz4frame.o lz4hc.o xxhash.o gamepad_.o keyboard.o mouse_.o pen.o sensor.o surface.o core.o quaternion.o random.o connection.o http.o socket.o cameraimage.o sensorstate.o vrpose.o vrposestate.o  -o "LinuxMouseHideExample" $(LIB)

camera.o: ../../Sources/Camera.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../Sources/Camera.cpp -o camera.o $(LIB)

main.o: ../../Sources/Main.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../Sources/Main.cpp -o main.o $(LIB)

meshobject.o: ../../Sources/MeshObject.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../Sources/MeshObject.cpp -o meshobject.o $(LIB)

objloader.o: ../../Sources/ObjLoader.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../Sources/ObjLoader.cpp -o objloader.o $(LIB)

audio.o: ../../../../Kore/Backends/Audio3/A3onA2/Sources/Kore/Audio.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Audio3/A3onA2/Sources/Kore/Audio.cpp -o audio.o $(LIB)

texttospeech.winrt.o: ../../../../Kore/Backends/Audio3/A3onA2/Sources/Kore/TextToSpeech.winrt.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Audio3/A3onA2/Sources/Kore/TextToSpeech.winrt.cpp -o texttospeech.winrt.o $(LIB)

glew.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/GL/glew.c
	gcc  -O2 $(INC) $(DEF) $(CFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/GL/glew.c -o glew.o $(LIB)

computeimpl.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/ComputeImpl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/ComputeImpl.cpp -o computeimpl.o $(LIB)

indexbufferimpl.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/IndexBufferImpl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/IndexBufferImpl.cpp -o indexbufferimpl.o $(LIB)

opengl.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/OpenGL.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/OpenGL.cpp -o opengl.o $(LIB)

openglwindow.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/OpenGLWindow.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/OpenGLWindow.cpp -o openglwindow.o $(LIB)

pipelinestateimpl.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/PipelineStateImpl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/PipelineStateImpl.cpp -o pipelinestateimpl.o $(LIB)

rendertargetimpl.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/RenderTargetImpl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/RenderTargetImpl.cpp -o rendertargetimpl.o $(LIB)

shaderimpl.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/ShaderImpl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/ShaderImpl.cpp -o shaderimpl.o $(LIB)

shaderstoragebufferimpl.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/ShaderStorageBufferImpl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/ShaderStorageBufferImpl.cpp -o shaderstoragebufferimpl.o $(LIB)

texturearrayimpl.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/TextureArrayImpl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/TextureArrayImpl.cpp -o texturearrayimpl.o $(LIB)

textureimpl.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/TextureImpl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/TextureImpl.cpp -o textureimpl.o $(LIB)

vertexbufferimpl.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/VertexBufferImpl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/VertexBufferImpl.cpp -o vertexbufferimpl.o $(LIB)

vrinterface.o: ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/VrInterface.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics4/OpenGL/Sources/Kore/VrInterface.cpp -o vrinterface.o $(LIB)

commandlist5impl.o: ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/CommandList5Impl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/CommandList5Impl.cpp -o commandlist5impl.o $(LIB)

constantbuffer5impl.o: ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/ConstantBuffer5Impl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/ConstantBuffer5Impl.cpp -o constantbuffer5impl.o $(LIB)

g5ong4.o: ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/G5onG4.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/G5onG4.cpp -o g5ong4.o $(LIB)

indexbuffer5impl.o: ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/IndexBuffer5Impl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/IndexBuffer5Impl.cpp -o indexbuffer5impl.o $(LIB)

pipelinestate5impl.o: ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/PipelineState5Impl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/PipelineState5Impl.cpp -o pipelinestate5impl.o $(LIB)

rendertarget5impl.o: ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/RenderTarget5Impl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/RenderTarget5Impl.cpp -o rendertarget5impl.o $(LIB)

shader5impl.o: ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/Shader5Impl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/Shader5Impl.cpp -o shader5impl.o $(LIB)

texture5impl.o: ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/Texture5Impl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/Texture5Impl.cpp -o texture5impl.o $(LIB)

vertexbuffer5impl.o: ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/VertexBuffer5Impl.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/Graphics5/G5onG4/Sources/Kore/VertexBuffer5Impl.cpp -o vertexbuffer5impl.o $(LIB)

display.o: ../../../../Kore/Backends/System/Linux/Sources/Kore/Display.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/Linux/Sources/Kore/Display.cpp -o display.o $(LIB)

display_xrandr.o: ../../../../Kore/Backends/System/Linux/Sources/Kore/Display_XRandr.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/Linux/Sources/Kore/Display_XRandr.cpp -o display_xrandr.o $(LIB)

display_xinerama.o: ../../../../Kore/Backends/System/Linux/Sources/Kore/Display_Xinerama.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/Linux/Sources/Kore/Display_Xinerama.cpp -o display_xinerama.o $(LIB)

display_old.o: ../../../../Kore/Backends/System/Linux/Sources/Kore/Display_old.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/Linux/Sources/Kore/Display_old.cpp -o display_old.o $(LIB)

sound.o: ../../../../Kore/Backends/System/Linux/Sources/Kore/Sound.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/Linux/Sources/Kore/Sound.cpp -o sound.o $(LIB)

system.o: ../../../../Kore/Backends/System/Linux/Sources/Kore/System.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/Linux/Sources/Kore/System.cpp -o system.o $(LIB)

window.o: ../../../../Kore/Backends/System/Linux/Sources/Kore/Window.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/Linux/Sources/Kore/Window.cpp -o window.o $(LIB)

gamepad.o: ../../../../Kore/Backends/System/Linux/Sources/Kore/Input/Gamepad.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/Linux/Sources/Kore/Input/Gamepad.cpp -o gamepad.o $(LIB)

mouse.o: ../../../../Kore/Backends/System/Linux/Sources/Kore/Input/Mouse.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/Linux/Sources/Kore/Input/Mouse.cpp -o mouse.o $(LIB)

event.o: ../../../../Kore/Backends/System/POSIX/Sources/Kore/Event.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/POSIX/Sources/Kore/Event.cpp -o event.o $(LIB)

mutex.o: ../../../../Kore/Backends/System/POSIX/Sources/Kore/Mutex.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/POSIX/Sources/Kore/Mutex.cpp -o mutex.o $(LIB)

semaphore.o: ../../../../Kore/Backends/System/POSIX/Sources/Kore/Semaphore.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/POSIX/Sources/Kore/Semaphore.cpp -o semaphore.o $(LIB)

thread.o: ../../../../Kore/Backends/System/POSIX/Sources/Kore/Thread.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/POSIX/Sources/Kore/Thread.cpp -o thread.o $(LIB)

threadlocal.o: ../../../../Kore/Backends/System/POSIX/Sources/Kore/ThreadLocal.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Backends/System/POSIX/Sources/Kore/ThreadLocal.cpp -o threadlocal.o $(LIB)

error.o: ../../../../Kore/Sources/C/Kore/Error.c
	gcc  -O2 $(INC) $(DEF) $(CFLAGS) -c ../../../../Kore/Sources/C/Kore/Error.c -o error.o $(LIB)

log.o: ../../../../Kore/Sources/C/Kore/Log.c
	gcc  -O2 $(INC) $(DEF) $(CFLAGS) -c ../../../../Kore/Sources/C/Kore/Log.c -o log.o $(LIB)

codestyle.o: ../../../../Kore/Sources/Kore/CodeStyle.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/CodeStyle.cpp -o codestyle.o $(LIB)

error_.o: ../../../../Kore/Sources/Kore/Error.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Error.cpp -o error_.o $(LIB)

log_.o: ../../../../Kore/Sources/Kore/Log.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Log.cpp -o log_.o $(LIB)

system_.o: ../../../../Kore/Sources/Kore/System.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/System.cpp -o system_.o $(LIB)

audio_.o: ../../../../Kore/Sources/Kore/Audio1/Audio.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Audio1/Audio.cpp -o audio_.o $(LIB)

sound_.o: ../../../../Kore/Sources/Kore/Audio1/Sound.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Audio1/Sound.cpp -o sound_.o $(LIB)

soundstream.o: ../../../../Kore/Sources/Kore/Audio1/SoundStream.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Audio1/SoundStream.cpp -o soundstream.o $(LIB)

stb_vorbis.o: ../../../../Kore/Sources/Kore/Audio1/stb_vorbis.c
	gcc  -O2 $(INC) $(DEF) $(CFLAGS) -c ../../../../Kore/Sources/Kore/Audio1/stb_vorbis.c -o stb_vorbis.o $(LIB)

audio__.o: ../../../../Kore/Sources/Kore/Audio2/Audio.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Audio2/Audio.cpp -o audio__.o $(LIB)

audio___.o: ../../../../Kore/Sources/Kore/Audio3/Audio.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Audio3/Audio.cpp -o audio___.o $(LIB)

color.o: ../../../../Kore/Sources/Kore/Graphics1/Color.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics1/Color.cpp -o color.o $(LIB)

graphics.o: ../../../../Kore/Sources/Kore/Graphics1/Graphics.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics1/Graphics.cpp -o graphics.o $(LIB)

image.o: ../../../../Kore/Sources/Kore/Graphics1/Image.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics1/Image.cpp -o image.o $(LIB)

graphics_.o: ../../../../Kore/Sources/Kore/Graphics2/Graphics.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics2/Graphics.cpp -o graphics_.o $(LIB)

kravur.o: ../../../../Kore/Sources/Kore/Graphics2/Kravur.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics2/Kravur.cpp -o kravur.o $(LIB)

graphics__.o: ../../../../Kore/Sources/Kore/Graphics3/Graphics.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics3/Graphics.cpp -o graphics__.o $(LIB)

texture.o: ../../../../Kore/Sources/Kore/Graphics3/Texture.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics3/Texture.cpp -o texture.o $(LIB)

graphics___.o: ../../../../Kore/Sources/Kore/Graphics4/Graphics.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics4/Graphics.cpp -o graphics___.o $(LIB)

pipelinestate.o: ../../../../Kore/Sources/Kore/Graphics4/PipelineState.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics4/PipelineState.cpp -o pipelinestate.o $(LIB)

texture_.o: ../../../../Kore/Sources/Kore/Graphics4/Texture.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics4/Texture.cpp -o texture_.o $(LIB)

texturearray.o: ../../../../Kore/Sources/Kore/Graphics4/TextureArray.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics4/TextureArray.cpp -o texturearray.o $(LIB)

commandlist.o: ../../../../Kore/Sources/Kore/Graphics5/CommandList.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics5/CommandList.cpp -o commandlist.o $(LIB)

constantbuffer.o: ../../../../Kore/Sources/Kore/Graphics5/ConstantBuffer.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics5/ConstantBuffer.cpp -o constantbuffer.o $(LIB)

graphics____.o: ../../../../Kore/Sources/Kore/Graphics5/Graphics.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics5/Graphics.cpp -o graphics____.o $(LIB)

pipelinestate_.o: ../../../../Kore/Sources/Kore/Graphics5/PipelineState.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics5/PipelineState.cpp -o pipelinestate_.o $(LIB)

texture__.o: ../../../../Kore/Sources/Kore/Graphics5/Texture.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Graphics5/Texture.cpp -o texture__.o $(LIB)

bufferreader.o: ../../../../Kore/Sources/Kore/IO/BufferReader.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/IO/BufferReader.cpp -o bufferreader.o $(LIB)

filereader.winrt.o: ../../../../Kore/Sources/Kore/IO/FileReader.winrt.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/IO/FileReader.winrt.cpp -o filereader.winrt.o $(LIB)

filewriter.o: ../../../../Kore/Sources/Kore/IO/FileWriter.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/IO/FileWriter.cpp -o filewriter.o $(LIB)

reader.o: ../../../../Kore/Sources/Kore/IO/Reader.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/IO/Reader.cpp -o reader.o $(LIB)

writer.o: ../../../../Kore/Sources/Kore/IO/Writer.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/IO/Writer.cpp -o writer.o $(LIB)

lz4.o: ../../../../Kore/Sources/Kore/IO/lz4/lz4.c
	gcc  -O2 $(INC) $(DEF) $(CFLAGS) -c ../../../../Kore/Sources/Kore/IO/lz4/lz4.c -o lz4.o $(LIB)

lz4frame.o: ../../../../Kore/Sources/Kore/IO/lz4/lz4frame.c
	gcc  -O2 $(INC) $(DEF) $(CFLAGS) -c ../../../../Kore/Sources/Kore/IO/lz4/lz4frame.c -o lz4frame.o $(LIB)

lz4hc.o: ../../../../Kore/Sources/Kore/IO/lz4/lz4hc.c
	gcc  -O2 $(INC) $(DEF) $(CFLAGS) -c ../../../../Kore/Sources/Kore/IO/lz4/lz4hc.c -o lz4hc.o $(LIB)

xxhash.o: ../../../../Kore/Sources/Kore/IO/lz4/xxhash.c
	gcc  -O2 $(INC) $(DEF) $(CFLAGS) -c ../../../../Kore/Sources/Kore/IO/lz4/xxhash.c -o xxhash.o $(LIB)

gamepad_.o: ../../../../Kore/Sources/Kore/Input/Gamepad.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Input/Gamepad.cpp -o gamepad_.o $(LIB)

keyboard.o: ../../../../Kore/Sources/Kore/Input/Keyboard.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Input/Keyboard.cpp -o keyboard.o $(LIB)

mouse_.o: ../../../../Kore/Sources/Kore/Input/Mouse.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Input/Mouse.cpp -o mouse_.o $(LIB)

pen.o: ../../../../Kore/Sources/Kore/Input/Pen.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Input/Pen.cpp -o pen.o $(LIB)

sensor.o: ../../../../Kore/Sources/Kore/Input/Sensor.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Input/Sensor.cpp -o sensor.o $(LIB)

surface.o: ../../../../Kore/Sources/Kore/Input/Surface.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Input/Surface.cpp -o surface.o $(LIB)

core.o: ../../../../Kore/Sources/Kore/Math/Core.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Math/Core.cpp -o core.o $(LIB)

quaternion.o: ../../../../Kore/Sources/Kore/Math/Quaternion.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Math/Quaternion.cpp -o quaternion.o $(LIB)

random.o: ../../../../Kore/Sources/Kore/Math/Random.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Math/Random.cpp -o random.o $(LIB)

connection.o: ../../../../Kore/Sources/Kore/Network/Connection.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Network/Connection.cpp -o connection.o $(LIB)

http.o: ../../../../Kore/Sources/Kore/Network/Http.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Network/Http.cpp -o http.o $(LIB)

socket.o: ../../../../Kore/Sources/Kore/Network/Socket.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Network/Socket.cpp -o socket.o $(LIB)

cameraimage.o: ../../../../Kore/Sources/Kore/Vr/CameraImage.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Vr/CameraImage.cpp -o cameraimage.o $(LIB)

sensorstate.o: ../../../../Kore/Sources/Kore/Vr/SensorState.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Vr/SensorState.cpp -o sensorstate.o $(LIB)

vrpose.o: ../../../../Kore/Sources/Kore/Vr/VrPose.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Vr/VrPose.cpp -o vrpose.o $(LIB)

vrposestate.o: ../../../../Kore/Sources/Kore/Vr/VrPoseState.cpp
	g++  -O2 $(INC) $(DEF) $(CPPFLAGS) -c ../../../../Kore/Sources/Kore/Vr/VrPoseState.cpp -o vrposestate.o $(LIB)
