#!/usr/bin/perl -w

use strict;

if
    ((scalar @ARGV) != 3)
{
    print "program x y density\n";
    exit;
}

open(FICHIER, ">map_generate");

my $x = $ARGV[0];
my $y = $ARGV[1];
my $density = $ARGV[2];
my $i = 0;
my $j = 0;

print FICHIER $y . "\n";


while ($i < $y)
{
    $j = 0;

    while ($j < $x)
    {
	if (int(rand(100)) <= $density)
	{
	    print FICHIER "o";
	}
	else
	{
	    print FICHIER ".";
	}
	$j++;
    }
    print FICHIER "\n";
    $i++;
}

close(FICHIER);