#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>
#include <sstream>
#include "Exercises.h"
using namespace std;
TEST_CASE ("Check method findx", "[findx]") {
	ostringstream sout;

	SECTION("Case 1") {
		auto smth = findx("horosho","ho");
		
		while(*smth){
			sout << *smth;
			smth++;
		}
		
		REQUIRE(sout.str() == "horosho");
			
	} 
	SECTION("Case 2") {
		auto smth = findx("ploho","ho");
		
		while(*smth){
			sout << *smth;
			smth++;
		}
		
		REQUIRE(sout.str() == "ho");
			
	} 
	SECTION("Case 3") {
		auto smth = findx("Dastan","st");
		
		while(*smth){
			sout << *smth;
			smth++;
		}
		
		REQUIRE(sout.str() == "stan");
			
	} 
	SECTION("Case 4") {
		auto smth = findx("ooooosh","osh");
		
		while(*smth){
			sout << *smth;
			smth++;
		}
		
		REQUIRE(sout.str() == "osh");
			
	} 
	SECTION("Case 4") {
		auto smth = findx("ohohohohohohoh","ho");
		
		while(*smth){
			sout << *smth;
			smth++;
		}
		
		REQUIRE(sout.str() == "hohohohohohoh");
			
	} 
	
}
TEST_CASE ("Check method cat_dot", "[cat_dot]") {
	ostringstream sout;

	SECTION("Case 1") {
		auto smth = cat_dot("ho","sho","ro");
		
		while(*smth){
			sout << *smth;
			smth++;
		}
		REQUIRE(sout.str() == "horosho");
	}
	SECTION("Case 2") {
		auto smth = cat_dot("hosho","sho","");
		
		while(*smth){
			sout << *smth;
			smth++;
		}
		REQUIRE(sout.str() == "hoshosho");
	}
}
TEST_CASE ("Check method strComp", "[strComp]") {
	ostringstream sout;

	SECTION("Case 1") {
		int smth = strComp("abc","bacd");
		REQUIRE(smth == -1);
		smth = strComp("bbc","adcd");
		REQUIRE(smth == 1);
		smth = strComp("abc","abc");
		REQUIRE(smth ==0);
		smth = strComp("abcd","abcdd");
		REQUIRE(smth == -1);
		smth = strComp("bbbbb","bbbb");
		REQUIRE(smth == 1);
	}
	
}