/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <sgath@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:47:34 by sgath             #+#    #+#             */
/*   Updated: 2021/05/20 13:54:23 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

void ponyOnTheHeap()
{
	std::cout << "=============================================" << std::endl;
	std::cout << "=============pony on the heap================" << std::endl;
	Pony *heap;
	
	heap = new Pony("Twilight Sparkle", "female", "magic", "lilac", "14");
	heap->outputPony();
	std::cout << "delete pone on the heap" << std::endl;
	delete heap;
}

void ponyOnTheStack()
{
	std::cout << "=============================================" << std::endl;
	std::cout << "=============pony on the stack===============" << std::endl;
	Pony stack = Pony("Rainbow Dash", "female", "faithfulness", "blue", "12");
	stack.outputPony();
	std::cout << "delete pone on the stack" << std::endl;
}

void myLittlePony()
{
	std::cout << "                            5,,5                                                 "<< std::endl;
	std::cout << "             XHHHB&5        r,,r,;                                               "<< std::endl;
	std::cout << "   ;s5,  H&GhHhhhh3iisGhh&Hh,,,,5,5                                              "<< std::endl;
	std::cout << "    S;,:s,52Ghhh33ssXhhhhhG3,,,,,,,,                                             "<< std::endl;
	std::cout << "     Hi,,,:2:,i33sishhhhhhA,,,,,,r,5                                             "<< std::endl;
	std::cout << "    HhhGS,,,2,33SsshhhhhhhH,,,,,,s,,                                             "<< std::endl;
	std::cout << "   HhhHhh&5,5;33siiGhhhhhhGH.,,,,,:,                                             "<< std::endl;
	std::cout << "  hhhAhhAGhh3333ssr&&AHHBBHAAH.,,,,5                                             "<< std::endl;
	std::cout << "  Hhh&hhHhhGhAH3 ,,, &&@   HA,,,,,,                                              "<< std::endl;
	std::cout << "  &h&Ghh&AB.,,,,,,,B GhM#h @h,,,,,:                                              "<< std::endl;
	std::cout << "  GhHhhAr G,,,,,,,,5 G9#X ##h,,,,,r                                              "<< std::endl;
	std::cout << "  hhAB   X# @,,,,,,@  9iM#MH9.,,:,9                                              "<< std::endl;
	std::cout << "  &GX    XrX  s,,,:.  i .&H9 :,:,&h                      5BHHBh                  "<< std::endl;
	std::cout << "  A        SM @#,,,,#    r.::,,:HGh                  HHhGhhhhhGhhGAH             "<< std::endl;
	std::cout << "            SrMM,,,,,   :,,,,.2H9&H                HhhGhhG5sssssGhhhhA           "<< std::endl;
	std::cout << "              XS,,,,,,,,,,HhhhhH&hH              HhhGSisssssssissssiGhhH         "<< std::endl;
	std::cout << "              S:2,,;,,,,,.AhhhhAGhA             HhhrssX333333333Xisss&GhA        "<< std::endl;
	std::cout << "              s,,,5,,,,,,&HAGhh&hGhB           Hhis9333333333333939sssGhhA9      "<< std::endl;
	std::cout << "                55555i  ,BhhhHiAGh3sB         5Gi3hhHHHHAhhhhh933333ssihhhH      "<< std::endl;
	std::cout << "                      Ss,S ,:.AGh33sGHi,,,,,iSS2&GHG:rHAAhh&Ghhhh3333ssShhGh     "<< std::endl;
	std::cout << "                      i,,,,sAhhh33siGH,, ,,,,::S         ;AhhAhhhh333SssGhh&H    "<< std::endl;
	std::cout << "                     S,:,B&hGhh33is9hB,,.:,,,. ,S          BGhhGhh3339ss9hhHh;   "<< std::endl;
	std::cout << "                     .,,,.Hhh933XishhS,,;,ri:,,,S           HHh&hhh333isShhHhH   "<< std::endl;
	std::cout << "                    5,,,,, H333isshhA,::,:ii;:,,S            XAhHGh933sishhHhhH  "<< std::endl;
	std::cout << "                    5,,,,,, AXssshGhr:  :i:ii:.,5             HGh&hh33sishhHhhH  "<< std::endl;
	std::cout << "                    :,,,,,,,,.HihhhX,,,,,.,r,: ,5              HhHhG33ssShhHhh&  "<< std::endl;
	std::cout << "                     5,,,,,,,,,sA&9,,,,,, ,,,, ,5              Hh&hh33ss3hhHhhh; "<< std::endl;
	std::cout << "                     r.,,,,;,,,,,,:,,.,,,,,,,,,s               BhhGG33siGhhAhhhH "<< std::endl;
	std::cout << "                      5.:,5.:,,,,,,,,,.5:,,,,:,5               ShhGh3SsshhhhhhhH "<< std::endl;
	std::cout << "                       S,,2,,,,Ss555SS;;i.,,,:s5s               GhG93ssshhHhhhH  "<< std::endl;
	std::cout << "                        5,,,,,,i      rr;;5,,,,,,.5             &hh33si9hhHhhH,  "<< std::endl;
	std::cout << "                        i5,,,,,S        5;;5,,,,,,:5            &hh32iihhhhGH    "<< std::endl;
	std::cout << "                        5,,,,,,,5        5;;rS,,,,,,5           GAh3sishh&H3     "<< std::endl;
	std::cout << "                        ,,,,,,s,,5        5;;;s,,,,,,S         ShH39ss3hGH       "<< std::endl;
	std::cout << "                       S,,,,,,5,,S.        5;;S,,,,,,,5        HhG3SsshH         "<< std::endl;
	std::cout << "                      i,,,,,,,S,,,5        S;;;5,,,,,,:        HGhhssA           "<< std::endl;
	std::cout << "                     5,,,,,,,,5,,,,         ;r;S,,,,,,,5       AH3sHH            "<< std::endl;
	std::cout << "                    5,,,,,,,,s,,,,,S        ;;;S,,,,,,:,S     GhhA.              "<< std::endl;
	std::cout << "                   s,,,,,,,,,S,,,,,5       .;;rS,,,,,,,,r     HAX                "<< std::endl;
	std::cout << "                  ;,,,,,,,,,:r,,,,,s       Sr;;S,,,,,,,,,S   r                   "<< std::endl;
	std::cout << "                  .,,,,,,,,,S,,,,,,s       s;rrS,,,,,,,,,5                       "<< std::endl;
	std::cout << "                2:,,,,,,,,,S5555555           :s,,,,,,,,,S                       "<< std::endl;
	std::cout << "                 :SSSSSSSi                     5r;ri55S                         "<< std::endl;
}

int main()
{
	std::string command;
	
	std::cout << "please enter:" << std::endl << "✿all\t ✿heap\t ✿stack\t ✿pony" << std::endl;
	std::getline(std::cin, command);
	if (command == "all" || command == "")
	{
		ponyOnTheHeap();
		ponyOnTheStack();
		std::cout << "=============================================" << std::endl;
	}
	else if (command == "heap")
		ponyOnTheHeap();
	else if (command == "stack")
		ponyOnTheStack();
	else if (command == "pony")
		myLittlePony();
	else
	{
		std::cout << "=============================================" << std::endl;
		std::cout << "please try again" << std::endl;
		std::cout << "=============================================" << std::endl;
	}
	return (0);
}