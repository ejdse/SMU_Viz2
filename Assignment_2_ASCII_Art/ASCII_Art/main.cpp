//
//  main.cpp
//  ASCII_Art

// Assignment 2: ASCII Art
// Generate an image only using C++'s cout.
// Andrew Clark and Ryan Shuhart

//  References:
//      https://jtdaugh.github.io/xcode-umich/
//    http://www.chris.com/ascii/index.php?art=people/vikings
//   http://www.cplusplus.com/forum/general/58945/


#include <iostream>

int main()
{
	std::cout << R"(
    
    
                                     ||`-.___
                                     ||    _.>
                                     ||_.-'
                 ==========================================
                  `.:::::::.       `:::::::.       `:::::::.
                   \:::::::.        :::::::.        :::::::\
                    L:::::::         :::::::         :::::::L
                     J::::::::        ::::::::        :::::::J
                      F:::::::        ::::::::        ::::::::L
                      |:::::::        ::::::::        ::::::::|
                      |:::::::        ::::::::        ::::::::|     .---.
                      |:::::::        ::::::::        ::::::::|    /(@  o`.
                      |:::::::        ::::::::        ::::::::|   |    /^^^
    __                |:::::::        ::::::::        ::::::::|    \ . \vvv
    .'_ \             |:::::::        ::::::::        ::::::::|     \ `--'
    (( ) |            |:::::::        ::::::::        ::::::::|      \ `.
     `/ /             |:::::::        ::::::::        ::::::::|       L  \
     / /              |:::::::        ::::::::        ::::::::|       |   \
     J J              |:::::::        ::::::::        ::::::::|       |    L
     | |              |:::::::        ::::::::        ::::::::|       |    |
     | |              |:::::::        ::::::::        ::::::::|       F    |
     | J\             F:::::::        ::::::::        ::::::::F      /     |
     |  L\           J::::::::       .::::::::       .:::::::J      /      F
     J  J `.     .   F:::::::        ::::::::        ::::::::F    .'      J
     L  \  `.  //  /:::::::'      .::::::::'      .::::::::/   .'        F
     J   `.  `//_..---.   .---.   .---.   .---.   .---.   <---<         J
     L    `-//_=/  _  \=/  _  \=/  _  \=/  _  \=/  _  \=/  _  \       /
     J     /|  |  (_)  |  (_)  |  (_)  |  (_)  |  (_)  |  (_)  |     /
     \   / |   \     //\     //\     //\     //\     //\     /    .'
     \ / /     `---//  `---//  `---//  `---//  `---//  `---'   .'
     ________/_/_________//______//______//______//______//_________.'_________
     ##VK######################################################################
    
    )";
	// Keep window open
	float x = 0;
	std::cin >> x;

	return 0;
}
