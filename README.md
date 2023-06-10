<p align="center"><img src="WaveEngine.png" width=350 height=350></p>
<h2 align="center">WaveEngine.</h2>

<p align="center"><img src="https://img.shields.io/github/stars/xzripper/WaveEngine?color=white&style=for-the-badge"> <img src="https://img.shields.io/github/v/tag/xzripper/WaveEngine?color=white&style=for-the-badge"> <img src="https://img.shields.io/github/commit-activity/w/xzripper/WaveEngine?color=white&style=for-the-badge"> <img src="https://img.shields.io/github/last-commit/xzripper/WaveEngine?color=white&style=for-the-badge"></p>
<p align="center"><img src="https://img.shields.io/github/languages/top/xzripper/WaveEngine?color=white&style=for-the-badge"> <img src="https://img.shields.io/github/languages/count/xzripper/WaveEngine?color=white&style=for-the-badge"> <img src="https://www.codefactor.io/repository/github/xzripper/waveengine/badge?style=for-the-badge"></p>
<p align="center"><img src="https://img.shields.io/github/license/xzripper/WaveEngine?color=white&style=for-the-badge"></p>

<p align="center">
<b>Introducing WaveEngine: A Cross-platform, Organized, and Easy-to-use Game Engine for C++.</b>

WaveEngine is a powerful game engine designed to provide developers with a cross-platform solution for creating games and interactive applications. Built with C++, WaveEngine offers a wide range of functionality and features, making game development accessible to both beginners and experienced developers.

Despite its current raw and unstable state, WaveEngine shows great promise as an intuitive and efficient game development framework. It aims to simplify the development process by providing a well-structured and organized architecture, allowing developers to focus on unleashing their creativity rather than dealing with complex technicalities.

Key Features of WaveEngine:

<li>1. Cross-platform Support: WaveEngine enables you to target multiple platforms, including Windows, macOS, Linux, and more</li>

<li>2. Easy-to-use Interface: WaveEngine strives to provide a user-friendly interface, making it accessible to developers of all skill levels. Its intuitive design and clear documentation help streamline the development workflow, reducing the learning curve and increasing productivity.</li>

<li><strike>3. Abundance of Functionality: Despite its early development stage, WaveEngine already offers a plethora of built-in features and tools. These include rendering capabilities, physics simulation, audio support, input management, asset management, and much more. This rich functionality empowers developers to create engaging and immersive experiences.</strike></li>

<li>4. Flexibility and Customization: WaveEngine embraces a modular approach, allowing developers to extend and customize its functionality to suit their specific project requirements. Whether you need to integrate third-party libraries, implement custom shaders, or extend the engine's capabilities, WaveEngine provides the necessary flexibility for seamless integration.</li><br>

<i><b>Please note that due to its raw and unstable state, it's recommended to thoroughly test and validate the engine's stability and compatibility before using it in production environments.</b></i>
</p>

<h2 align="center">WaveEngine Technical Part.</h2>

<div align="center">
  <h3>Examples.</h3>

  <p><img src="Media\FirstExample.png"></p>
  <p><b>EXAMPLE:</b> Creating simple cube in WaveEngine.</p>

  <p><img src="Media\SecondExample.png"></p>
  <p><b>EXAMPLE:</b> Handling keys in WaveEngine.</p>

  <p><img src="Media\ThirdExample.png"></p>
  <p><b>EXAMPLE:</b> Importing custom models in WaveEngine.</p>

  <h3>Installation.</h3>
  <h4>CMake.</h4>

  <p><b>CMakeLists.txt should correctly look like...:</b></p>

  <p><img src="Media\CMake.png"></p>

  <p><b>SDK:</b> Dowload engine main dependency (P3D) <a href="https://mega.nz/file/TGwmRKYR#Mv3t5JS6eKWzRN2iLaik8CzMpQPTtAfqId63iNGl4VM">here</a>. After unpack <code>include</code> and <code>lib</code> into <code>WaveEngine/p3d/</code>.</p>

  <p><b>CMAKE:</b> Replace <code>#PROJECT</code> with your project name (in CMake), also replace <code>#FILES</code> with files you need to compile without considering engine files. If your project has only <code>main.cpp</code> set <code>#FILES</code> to <code>main.cpp</code>.</p>
  <p><b>CMAKE:</b> Also make sure that your CMake doesn't have this line: <code>set(CMAKE_CXX_STANDARD, INTEGER)</code>, because this code breaks WaveEngine dependencies.</p><br>

  <p><b>IDE:</b> Set your compiler to Visual Studio, after set CMake configuration to <code>Release</code>.</p><br>
  
  <p><b>Done!</b></p>

  <h3>Other build systems.</h3>

  <p><b>Right now it's unkown how to build on another systems, but you should play with it! Also, TODO.</b></p>

  <h3>Engine documentation.</h3>
  <p><b>Right now there is no documentation for engine, because engine functional is too small, and engine is very young and raw, documentation will appear in next releases.</b></p>

  <h3>Engine TODO/issues/features table.</h3>
  <p><b>You can visit Engine Table <a href="https://github.com/users/xzripper/projects/4/">here.</a></b></p>
  <a href="https://github.com/users/xzripper/projects/4/"><img src="Media\EngineTable.png"></a>
</div>
  
<hr><p align="center">That's it, have a good day!</p>
