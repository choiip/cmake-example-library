#pragma once

// Define EXPORT_API for any platform
#if defined _WIN32 || defined __CYGWIN__
  #ifdef foo_EXPORTS  // cmake will define this marco
    #ifdef __GNUC__
      #define EXPORT_API __attribute__ ((dllexport))
    #else
      #define EXPORT_API __declspec(dllexport) // Note: actually gcc seems to also supports this syntax.
    #endif
  #else
    #ifdef __GNUC__
      #define EXPORT_API __attribute__ ((dllimport))
    #else
      #define EXPORT_API __declspec(dllimport) // Note: actually gcc seems to also supports this syntax.
    #endif
  #endif
  #define HIDE_API
#else
  #if __GNUC__ >= 4
    #define EXPORT_API __attribute__ ((visibility ("default")))
    #define HIDE_API  __attribute__ ((visibility ("hidden")))
  #else
    #define EXPORT_API
    #define HIDE_API
  #endif
#endif
