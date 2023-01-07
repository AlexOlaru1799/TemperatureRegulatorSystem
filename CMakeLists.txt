
cmake_minimum_required(VERSION 3.0.0)
project(heatingSystem VERSION 0.1.0)

include(CTest)
enable_testing()


add_subdirectory(googletest)

include_directories(googletest/include)



add_library(TemperatureException TemperatureException.cpp TemperatureException.hpp)
add_library(AException AException.cpp AException.hpp)
add_library(IException IException.cpp IException.hpp)
add_library(ATemperatureSystem ATemperatureSystem.cpp ATemperatureSystem.hpp)
add_library(CoolingSystem CoolingSystem.cpp CoolingSystem.hpp)
add_library(HeatingSystemm HeatingSystem.cpp HeatingSystem.hpp)
add_library(Temperature Temperature.cpp Temperature.hpp)
add_library(Thermostat Thermostat.cpp Thermostat.hpp)
add_library(PreferencesSystem PreferencesSystem.cpp PreferencesSystem.hpp)
add_library(HeatingStation HeatingStation.cpp HeatingStation.hpp)

add_executable(heatingSystem main.cpp )

set_target_properties(heatingSystem PROPERTIES LINKER_LANGUAGE CXX)

# CoolingSystem HeatingSystem ATemperatureSystem

target_link_libraries( heatingSystem HeatingStation TemperatureException AException IException CoolingSystem HeatingSystemm ATemperatureSystem Thermostat  Temperature PreferencesSystem gtest)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
