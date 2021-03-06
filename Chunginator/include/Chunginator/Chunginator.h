#pragma once

//--- Chunginator Constants ----//

#define CGR_OPENGL
#define GUI_IMGUI

//---- Graphics API Includes ----//

#ifdef _WIN32
	#ifdef CGR_OPENGL
		#include <glad/glad.h>
		#include <GLFW/glfw3.h>

		#ifdef GUI_IMGUI
			#include <IMGUI/imgui.h>
			#include <IMGUI/imgui_impl_opengl3.h>
			#include <IMGUI/imgui_impl_glfw.h>
		#endif
	#else
		#error "graphics api not supported"
	#endif
#else
	#error "os not supported"
#endif

//--- 3rd Party Includes  ----//

// GLM //

#include <glm/glm.hpp>
#include <glm/vec4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

// STB Image //

#include <STB_IMAGE/stb_image.h>

//---- Chunginator Includes ----//

#include "Math/Vec2.h"
#include "Math/Vec3.h"
#include "Math/Vec4.h"

//---- Standard Includes ----//

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <array>