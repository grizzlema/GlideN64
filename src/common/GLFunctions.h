#ifndef GLFUNCTIONS_H
#define GLFUNCTIONS_H

#ifdef EGL
extern PFNGLBLENDFUNCPROC glBlendFunc;
extern PFNGLPIXELSTOREIPROC glPixelStorei;
extern PFNGLCLEARCOLORPROC glClearColor;
extern PFNGLCULLFACEPROC glCullFace;
extern PFNGLDEPTHFUNCPROC glDepthFunc;
extern PFNGLDEPTHMASKPROC glDepthMask;
extern PFNGLDISABLEPROC glDisable;
extern PFNGLENABLEPROC glEnable;
extern PFNGLPOLYGONOFFSETPROC glPolygonOffset;
extern PFNGLSCISSORPROC glScissor;
extern PFNGLVIEWPORTPROC glViewport;
extern PFNGLBINDTEXTUREPROC glBindTexture;
extern PFNGLTEXIMAGE2DPROC glTexImage2D;
extern PFNGLTEXPARAMETERIPROC glTexParameteri;
extern PFNGLGETINTEGERVPROC glGetIntegerv;
extern PFNGLGETSTRINGPROC glGetString;
extern PFNGLREADPIXELSPROC glReadPixels;
extern PFNGLTEXSUBIMAGE2DPROC glTexSubImage2D;
extern PFNGLDRAWARRAYSPROC glDrawArrays;
extern PFNGLGETERRORPROC glGetError;
extern PFNGLDRAWELEMENTSPROC glDrawElements;
extern PFNGLLINEWIDTHPROC glLineWidth;
extern PFNGLCLEARPROC glClear;
extern PFNGLGETFLOATVPROC glGetFloatv;
extern PFNGLDELETETEXTURESPROC glDeleteTextures;
extern PFNGLGENTEXTURESPROC glGenTextures;
extern PFNGLTEXPARAMETERFPROC glTexParameterf;
#endif

extern PFNGLCREATESHADERPROC glCreateShader;
extern PFNGLCOMPILESHADERPROC glCompileShader;
extern PFNGLSHADERSOURCEPROC glShaderSource;
extern PFNGLCREATEPROGRAMPROC glCreateProgram;
extern PFNGLATTACHSHADERPROC glAttachShader;
extern PFNGLLINKPROGRAMPROC glLinkProgram;
extern PFNGLUSEPROGRAMPROC glUseProgram;
extern PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
extern PFNGLUNIFORM1IPROC glUniform1i;
extern PFNGLUNIFORM1FPROC glUniform1f;
extern PFNGLUNIFORM2FPROC glUniform2f;
extern PFNGLUNIFORM2IPROC glUniform2i;
extern PFNGLUNIFORM4IPROC glUniform4i;

extern PFNGLUNIFORM4FPROC glUniform4f;
extern PFNGLUNIFORM3FVPROC glUniform3fv;
extern PFNGLUNIFORM4FVPROC glUniform4fv;
extern PFNGLDETACHSHADERPROC glDetachShader;
extern PFNGLDELETESHADERPROC glDeleteShader;
extern PFNGLDELETEPROGRAMPROC glDeleteProgram;
extern PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
extern PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
extern PFNGLGETSHADERIVPROC glGetShaderiv;
extern PFNGLGETPROGRAMIVPROC glGetProgramiv;

extern PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
extern PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
extern PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
extern PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;
extern PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f;
extern PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv;

extern PFNGLACTIVETEXTUREPROC glActiveTexture;
extern PFNGLDEPTHRANGEFPROC glDepthRangef;
extern PFNGLCLEARDEPTHFPROC glClearDepthf;
extern PFNGLBLENDCOLORPROC glBlendColor;

extern PFNGLDRAWBUFFERSPROC glDrawBuffers;
extern PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
extern PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
extern PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
extern PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;
extern PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;
extern PFNGLTEXSTORAGE2DMULTISAMPLEPROC glTexStorage2DMultisample;
extern PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;
extern PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;
extern PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
extern PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
extern PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;
extern PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
extern PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;
extern PFNGLGENBUFFERSPROC glGenBuffers;
extern PFNGLBINDBUFFERPROC glBindBuffer;
extern PFNGLBUFFERDATAPROC glBufferData;
extern PFNGLMAPBUFFERPROC glMapBuffer;
extern PFNGLMAPBUFFERRANGEPROC glMapBufferRange;
extern PFNGLUNMAPBUFFERPROC glUnmapBuffer;
extern PFNGLDELETEBUFFERSPROC glDeleteBuffers;
extern PFNGLBINDIMAGETEXTUREPROC glBindImageTexture;
extern PFNGLMEMORYBARRIERPROC glMemoryBarrier;
extern PFNGLGETSTRINGIPROC glGetStringi;
extern PFNGLINVALIDATEFRAMEBUFFERPROC glInvalidateFramebuffer;
extern PFNGLBUFFERSTORAGEPROC glBufferStorage;
extern PFNGLFENCESYNCPROC glFenceSync;
extern PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
extern PFNGLDELETESYNCPROC glDeleteSync;

extern PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
extern PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;
extern PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
extern PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;
extern PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
extern PFNGLBINDBUFFERBASEPROC glBindBufferBase;
extern PFNGLBUFFERSUBDATAPROC glBufferSubData;

extern PFNGLGETPROGRAMBINARYPROC glGetProgramBinary;
extern PFNGLPROGRAMBINARYPROC glProgramBinary;
extern PFNGLPROGRAMPARAMETERIPROC glProgramParameteri;

extern PFNGLTEXSTORAGE2DPROC glTexStorage2D;

extern PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
extern PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
extern PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
extern PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;

#endif // GLFUNCTIONS_H
