/*
 * The G2 Editor application.
 *
 * Copyright (C) 2025 Chris Turner <chris_purusha@icloud.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

// NOTE - Only moduleResourcesAccess.c should be including this!

#ifndef __MODULE_RESOURCES_H__
#define __MODULE_RESOURCES_H__

#include "sysIncludes.h"
#include "defs.h"
#include "types.h"

// Terminate the string maps with a NULL, so that we can work out array size
const char * fltClassicDbStrMap[]     = {"12db", "18db", "24db", NULL};
const char * fltMultiDbStrMap[]       = {"6db", "12db", NULL};
const char * emptyStrMap[]            = {" ", NULL};
const char * driverTypeStrMap[]       = {"Reed", "Bow", "-Lip-", "-Mallet-", NULL};
const char * octaveStrMap[]           = {"C0", "C1", "C2", "C3", "C4", "C5", "C6", "C7", NULL};
const char * bip128StrMap[]           = {"-64", "-63", "-62", "-61", "-60", "-59", "-58", "-57", "-56", "-55", "-54", "-53", "-52", "-51", "-50", "-49", "-48", "-47", "-46", "-45", "-44", "-43", "-42", "-41", "-40", "-39", "-38", "-37", "-36", "-35", "-34", "-33", "-32", "-31", "-30", "-29", "-28", "-27", "-26", "-25", "-24", "-23", "-22", "-21", "-20", "-19", "-18", "-17", "-16", "-15", "-14", "-13", "-12", "-11", "-10", "-9", "-8", "-7", "-6", "-5", "-4", "-3", "-2", "-1", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", NULL};
const char * u128StrMap[]             = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", NULL};
const char * captureStrMap[]          = {"Closest", "Evenly", NULL};
const char * fltNordDbStrMap[]        = {"12dB", "24dB", NULL};
const char * offTo100KbStrMap[]       = {"Off", "25%", "50%", "75%", "100%", NULL};
const char * offOnStrMap[]            = {"Off", "On", NULL};
const char * expStrMap[]              = {"Exp", "Lin", "dB", NULL};
const char * logStrMap[]              = {"Log", "Lin", NULL};
const char * padStrMap[]              = {"0dB", "+6dB", NULL};
const char * db12PadStrMap[]          = {"+6dB", "0dB", "-6dB", "-12dB", NULL};
const char * db12BPadStrMap[]         = {"0dB", "-6dB", "-12dB", NULL};
const char * gcStrMap[]               = {"GC", "GC", NULL};
const char * kbStrMap[]               = {"KB", "KB", NULL};
const char * sideChainStrMap[]        = {"Side Chain", "Side Chain", NULL};
const char * pitchTypeStrMap[]        = {"Semi", "Freq", "Factor", "Partial", NULL};
const char * fmTypeStrMap[]           = {"FM Lin", "FM Trk", NULL};
const char * envShapeStrMap[]         = {"LogExp", "LinExp", "ExpExp", "LinLin", NULL};
const char * normalResetStrMap[]      = {"Normal", "Reset", NULL};
const char * posStrMap[]              = {"Pos", "PosInv", "Neg", "NegInv", "Bip", "BipInv", NULL};
const char * outToStrMap[]            = {"Main 1/2", "Main 3/4", "FX 1/2", "FX 3/4", "Bus 1/2", "Bus 3/4", NULL};
const char * outTo4OutStrMap[]        = {"Main", "Fx", "Bus", NULL};
const char * inFxStrMap[]             = {"1/2", "3/4", NULL};
const char * shapeTypeStrMap[]        = {"sin", "tri", "saw", "squ", "sup", NULL};
const char * shapeOscATypeStrMap[]    = {"sin", "tri", "saw", "squ", "p25", "p10", NULL};
const char * reverbTypeStrMap[]       = {"Small", "Medium", "Large", "Hall", NULL};
const char * polyMonoStrMap[]         = {"Poly", "Mono", NULL};
const char * rangeStrMap[]            = {"Rate Lo", "Rate Hi", "BPM", "Clk", "Rate Sub", NULL};
const char * lfoWaveStrMap[]          = {"Sin", "Tri", "Saw", "Squ", "RndSt", "Rnd", NULL};
const char * lfoAltWaveStrMap[]       = {"Sine", "CosBell", "TriBell", "Saw>Tri", "Tri>Squ", "Pulse", NULL};
const char * lfoShpAWaveStrMap[]      = {"Sine", "CosBell", "TriBell", "Saw>Tri", "Squ>Tri", "Sqr", NULL};
const char * rangeLfoCStrMap[]        = {"Rate Lo", "Rate Hi", "BPM", "Rate Sub", NULL};
const char * saturateCurveStrMap[]    = {"1", "2", "3", "4", NULL};
const char * shpExpCurveStrMap[]      = {"x2", "x3", "x4", "x5", NULL};
const char * pulseRangeStrMap[]       = {"Sub", "Lo", "Hi", NULL};
const char * pulseModeStrMap[]        = {"Plus", "Minus", NULL};
const char * bipUniStrMap[]           = {"Bip", "Uni", NULL};
const char * vowelStrMap[]            = {"A", "E", "I", "O", "U", "Y", "AA", "AE", "OE", NULL};
const char * nordFilterTypeStrMap[]   = {"LP", "BP", "HP", "BR", NULL};
const char * staticFilterTypeStrMap[] = {"LP", "BP", "HP", NULL};
const char * multiEnvSustainStrMap[]  = {"None", "L1", "L2", "L3", "L4", NULL};
const char * drSynthPresetStrMap[]    = {"Kick 1", "Kick 2", "Kick 3", "Kick 4", "Kick 5", "Snare 1", "Snare 2", "Snare 3", "Snare 4", "Snare 5", "Tom1 1", "Tom1 2", "Tom1 3", "Tom2 1", "Tom2 2", "Tom2 3", "Tom3 1", "Tom3 2", "Tom3 3", "Cymb 1", "Cymb 2", "Cymb 3", "Cymb 4", "Cymb 5", "Perc 1", "Perc 2", "Perc 3", "Perc 4", "Perc 5", "Perc 6", NULL}; // *** Don't have the list
const char * asymSymStrMap[]          = {"Asym", "Sym", NULL};
const char * odTypeStrMap[]           = {"Soft", "Hard", "Heavy", "Fat", NULL};
const char * delayStrMap[]            = {"50ms", "?", "?", "?", NULL}; // *** For Scratch module; don't have the list
const char * gateTypeStrMap[]         = {"AND", "NAND", "OR", "NOR", "XOR", "NXOR", NULL};
const char * invStrMap[]              = {"+", "Inv", NULL};
const char * clkSrcStrMap[]           = {"Internal", "Master", NULL};
const char * int16StrMap[]            = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", NULL};
const char * divModeStrMap[]          = {"Gated", "Toggled", NULL};
const char * out8StrMap[]             = {"Out1", "Out2", "Out3", "Out4", "Out5", "Out6", "Out7", "Out8", NULL};
const char * in8StrMap[]              = {"In1", "In2", "In3", "In4", "In5", "In6", "In7", "In8", NULL};
const char * rectStrMap[]             = {"Half wave pos.", "Half wave neg.", "Full wave pos.", "Full wave neg.", NULL};
const char * shpStaticStrMap[]        = {"Inv x3", "Inv x2", "x2", "x3", NULL};
const char * trigGateStrMap[]         = {"Trig", "Gate", NULL};
const char * decayReleaseStrMap[]     = {"Decay", "Release", NULL};
const char * fltLPSlopeStrMap[]       = {"6db", "12db", "18db", "24db", "30db", "36db", NULL};
const char * flipFlopStrMap[]         = {"D-type", "RS-type", NULL};
const char * freqShiftRangeStrMap[]   = {"Hi", "Lo", "Sub", NULL};
const char * fltPhaseTypeStrMap[]     = {"Notch", "Peak", "Deep", NULL};
const char * eq2BandLoStrMap[]        = {"80Hz", "LoVal 1", "LoVal 2", NULL};
const char * eq2BandHiStrMap[]        = {"12kHz", "LoVal 1", "LoVal 2", NULL};
const char * presetStrMap[]           = {"Set", NULL};
const char * bitsStrMap[]             = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "Off", NULL};
const char * sustainStrMap[]          = {"L1", "L2", NULL};
const char * midiChanStrMap[]         = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "This", "SlotA", "SlotB", "SlotC", "SlotD", NULL};
const char * midiChanRcvStrMap[]      = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "This", "Keyb", NULL};
const char * thruStrMap[]             = {"Notes only", "Notes+Ctrls", NULL};
const char * levConvStrMap[]          = {"Bip", "Pos", "Neg", NULL};
const char * oscShpAStrMap[]          = {"Sine1", "Sine2", "Sine3", "Sine4", "TriSaw", "SymPulse", NULL};
const char * oscShpBStrMap[]          = {"Sine1", "Sine2", "Sine3", "Sine4", "TriSaw", "DblSaw", "Pulse", "SymPulse", NULL};
const char * dxFeedbackStrMap[]       = {"0", "1", "2", "3", "4", "5", "6", "7", NULL};
const char * dxAlgStrMap[]            = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", NULL};
const char * pShiftDelayStrMod[]      = {"50ms", "?", "?", "?", "?", NULL};
const char * twoToInSourceStrMap[]    = {"In1/2", "In3/4", "Bus1/2", "Bus3/4", NULL};
const char * fourToInSourceStrMap[]   = {"In", "Bus", NULL};
const char * delayRangeStrMap[]       = {"5ms", "25ms", "100ms", "500ms", "1.0s", "2.0s", "2.7s", NULL};
const char * timeClkStrMap[]          = {"Time", "Clk", NULL};
const char * ratioFixedStrMap[]       = {"Ratio", "Fixed", NULL};
const char * detuneStrMap[]           = {"-7", "-6", "-5", "-4", "-3", "-2", "-1", "0", "+1", "+2", "+3", "+4", "+5", "+6", "+7", NULL};
const char * operator07StrMap[]       = {"0", "1", "2", "3", "4", "5", "6", "7", NULL};
const char * operatorDepthStrMap[]    = {"-Lin", "-Exp", "+Exp", "+Lin", NULL};
const char * phaserTypeStrMap[]       = {"Type I", "Type II", NULL};
const char * invertStrMap[]           = {"m", "1-m", NULL};
const char * monoKeyStrMap[]          = {"Last", "Lo", "Hi", NULL};
const char * edgeStepStrMap[]         = {"100%", "75%", "50%", "25%", "0%", NULL};
const char * vocoderStrMap[]          = {"Off", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", NULL};
const tRgb   offOnColourMap[]         = {RGB_BACKGROUND_GREY, RGB_GREEN_ON};

const tRgb   cableColourMap[] = { // TODO: implement a null termination mechanism for colour maps, so that we can get array size and do sanity check
    {0.7, 0.1, 0.1},              // red
    {0.1, 0.1, 0.7},              // blue
    {0.7, 0.7, 0.1},              // yellow
    {0.8, 0.3, 0.2},              // orange
    {0.1, 0.7, 0.1},              // green
    {0.7, 0.1, 0.7},              // purple
    {0.9, 0.9, 0.9},              // white
};

const tRgb   gModuleColourMap[] = {
    {0.7, 0.7, 0.7},       // standard grey
    {0.8, 0.6, 0.6},       // red 4
    {0.6, 0.8, 0.6},       // green 4
    {0.6, 0.6, 0.8},       // blue 4
    {0.8, 0.8, 0.6},       // yellow 4
    {0.3, 0.3, 0.8},       // blue 1
    {0.8, 0.3, 0.3},       // red 1
    {0.4, 0.8, 0.8},       // cyan 2
    {0.4, 0.8, 0.4},       // green 2
    {0.8, 0.8, 0.3},       // yellow 1
    {0.3, 0.8, 0.3},       // green 1
    {0.8, 0.8, 0.4},       // yellow 2
    {0.5, 0.5, 0.8},       // blue 3
    {0.8, 0.4, 0.4},       // red 2
    {0.8, 0.5, 0.5},       // red 3
    {0.8, 0.8, 0.5},       // yellow 3
    {0.5, 0.8, 0.5},       // green 3
    {0.3, 0.8, 0.8},       // cyan 1
    {0.5, 0.8, 0.8},       // cyan 3
    {0.6, 0.8, 0.8},       // cyan 4
    {0.4, 0.4, 0.8},       // blue 2
    {0.8, 0.3, 0.8},       // purple 1
    {0.8, 0.4, 0.8},       // purple 2
    {0.8, 0.5, 0.8},       // purple 3
    {0.8, 0.6, 0.8},       // purple 4
};

const tRgb   connectorColourMap[] = {
    {0.7, 0.2, 0.2},
    {0.2, 0.2, 0.7},
    {0.9, 0.9, 0.0}, };


const tModuleProperties gModuleProperties[] = {
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Keyboard",     2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"4-Out",        2, volumeTypeNone,     ledTypeNo },
    {"2-Out",        2, volumeTypeStereo,   ledTypeNo },
    {"Invert",       2, volumeTypeNone,     ledTypeYes},
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"OscB",         5, volumeTypeNone,     ledTypeNo },
    {"OscShpB",      4, volumeTypeNone,     ledTypeNo },
    {"OscC",         3, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Reverb",       3, volumeTypeNone,     ledTypeNo },
    {"OscString",    3, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Sw8-1",        4, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"ValSw1-2",     2, volumeTypeNone,     ledTypeNo },
    {"X-Fade",       2, volumeTypeNone,     ledTypeNo },
    {"Mix4-1B",      2, volumeTypeNone,     ledTypeNo },
    {"EnvADSR",      4, volumeTypeNone,     ledTypeYes},
    {"Mux1-8",       2, volumeTypeNone,     ledTypeNo },
    {"PartQuant",    2, volumeTypeNone,     ledTypeNo },
    {"ModADSR",      5, volumeTypeNone,     ledTypeNo },
    {"LfoC",         2, volumeTypeNone,     ledTypeNo },
    {"LfoShpA",      5, volumeTypeNone,     ledTypeNo },
    {"LfoA",         3, volumeTypeNone,     ledTypeNo },
    {"OscMaster",    3, volumeTypeNone,     ledTypeNo },
    {"Saturate",     2, volumeTypeNone,     ledTypeNo },
    {"MetNoise",     2, volumeTypeNone,     ledTypeNo },
    {"Device",       3, volumeTypeNone,     ledTypeNo },
    {"Noise",        2, volumeTypeNone,     ledTypeNo },
    {"Eq2Band",      3, volumeTypeNone,     ledTypeNo },
    {"Eq3band",      4, volumeTypeNone,     ledTypeNo },
    {"ShpExp",       2, volumeTypeNone,     ledTypeNo },
    {"Driver",       3, volumeTypeNone,     ledTypeNo },
    {"SwOnOffM",     2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Pulse",        2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Mix8-1B",      4, volumeTypeNone,     ledTypeNo },
    {"EnvH",         2, volumeTypeNone,     ledTypeNo },
    {"Delay",        2, volumeTypeNone,     ledTypeNo },
    {"Constant",     2, volumeTypeNone,     ledTypeNo },
    {"LevMult",      2, volumeTypeNone,     ledTypeNo },
    {"FltVoice",     4, volumeTypeNone,     ledTypeNo },
    {"EnvAHD",       4, volumeTypeNone,     ledTypeNo },
    {"Pan",          2, volumeTypeNone,     ledTypeNo },
    {"MixStereo",    5, volumeTypeNone,     ledTypeNo },
    {"FltMulti",     4, volumeTypeNone,     ledTypeNo },
    {"ConstSwT",     2, volumeTypeNone,     ledTypeNo },
    {"FltNord",      5, volumeTypeNone,     ledTypeNo },
    {"EnvMulti",     6, volumeTypeNone,     ledTypeNo },
    {"SandH",        2, volumeTypeNone,     ledTypeNo },
    {"FltStatic",    3, volumeTypeNone,     ledTypeNo },
    {"EnvD",         2, volumeTypeNone,     ledTypeNo },
    {"Resonator",    5, volumeTypeNone,     ledTypeNo },
    {"Automate",     2, volumeTypeNone,     ledTypeNo },
    {"DrumSynth",    8, volumeTypeNone,     ledTypeNo },
    {"CompLev",      2, volumeTypeNone,     ledTypeNo },
    {"Mux8-1X",      3, volumeTypeNone,     ledTypeNo },
    {"Clip",         2, volumeTypeNone,     ledTypeNo },
    {"Overdrive",    2, volumeTypeNone,     ledTypeNo },
    {"Scratch",      3, volumeTypeNone,     ledTypeNo },
    {"Gate",         2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Mix2-1B",      2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"ClkGen",       4, volumeTypeNone,     ledTypeNo },
    {"ClkDiv",       2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"EnvFollow",    2, volumeTypeNone,     ledTypeNo },
    {"NoteScaler",   2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"WaveWrap",     2, volumeTypeNone,     ledTypeNo },
    {"NoteQuant",    2, volumeTypeNone,     ledTypeNo },
    {"SwOnOffT",     2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Sw1-8",        4, volumeTypeNone,     ledTypeNo },
    {"Sw4-1",        3, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"LevAmp",       2, volumeTypeNone,     ledTypeNo },
    {"Rect",         2, volumeTypeNone,     ledTypeNo },
    {"ShpStatic",    2, volumeTypeNone,     ledTypeNo },
    {"EnvADR",       3, volumeTypeNone,     ledTypeNo },
    {"WindSw",       2, volumeTypeNone,     ledTypeNo },
    {"8Counter",     2, volumeTypeNone,     ledTypeNo },
    {"FltLP",        2, volumeTypeNone,     ledTypeNo },
    {"Sw1-4",        3, volumeTypeNone,     ledTypeNo },
    {"Flanger",      3, volumeTypeNone,     ledTypeNo },
    {"Sw1-2",        2, volumeTypeNone,     ledTypeNo },
    {"FlipFlop",     2, volumeTypeNone,     ledTypeNo },
    {"FltClassic",   4, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"StChorus",     3, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"OscD",         2, volumeTypeNone,     ledTypeNo },
    {"OscA",         3, volumeTypeNone,     ledTypeNo },
    {"FreqShift",    3, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Sw2-1",        2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"FltPhase",     5, volumeTypeNone,     ledTypeNo },
    {"EqPeak",       4, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"ValSw2-1",     2, volumeTypeNone,     ledTypeNo },
    {"OscNoise",     3, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Vocoder",      8, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"LevAdd",       2, volumeTypeNone,     ledTypeNo },
    {"Fade1-2",      2, volumeTypeNone,     ledTypeNo },
    {"Fade2-1",      2, volumeTypeNone,     ledTypeNo },
    {"LevScaler",    3, volumeTypeNone,     ledTypeNo },
    {"Mix8-1A",      2, volumeTypeNone,     ledTypeNo },
    {"LevMod",       3, volumeTypeNone,     ledTypeNo },
    {"Digitizer",    3, volumeTypeNone,     ledTypeNo },
    {"EnvADDSR",     5, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"SeqNote",      9, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Mix4-1C",      4, volumeTypeMono,     ledTypeNo },
    {"Mux8-1",       2, volumeTypeNone,     ledTypeNo },
    {"WahWah",       2, volumeTypeNone,     ledTypeNo },
    {"Name",         1, volumeTypeNone,     ledTypeNo },
    {"Fx-In",        2, volumeTypeStereo,   ledTypeNo },
    {"MinMax",       2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"BinCounter",   2, volumeTypeNone,     ledTypeNo },
    {"ADConv",       2, volumeTypeNone,     ledTypeNo },
    {"DAConv",       2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"FltHP",        2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"T&H",          2, volumeTypeNone,     ledTypeNo },
    {"Mix4-1S",      4, volumeTypeStereo,   ledTypeNo },
    {"CtrlSend",     2, volumeTypeNone,     ledTypeNo },
    {"PCSend",       2, volumeTypeNone,     ledTypeNo },
    {"NoteSend",     2, volumeTypeNone,     ledTypeNo },
    {"SeqEvent",     5, volumeTypeNone,     ledTypeNo },
    {"SeqVal",       8, volumeTypeNone,     ledTypeNo },
    {"SeqLev",       8, volumeTypeNone,     ledTypeNo },
    {"CtrlRcv",      2, volumeTypeNone,     ledTypeNo },
    {"NoteRcv",      2, volumeTypeNone,     ledTypeNo },
    {"NoteZone",     3, volumeTypeNone,     ledTypeNo },
    {"Compress",     5, volumeTypeCompress, ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"KeyQuant",     2, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"SeqCtr",       8, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"NoteDet",      2, volumeTypeNone,     ledTypeNo },
    {"LevConv",      2, volumeTypeNone,     ledTypeNo },
    {"Glide",        2, volumeTypeNone,     ledTypeNo },
    {"CompSig",      2, volumeTypeNone,     ledTypeNo },
    {"ZeroCnt",      2, volumeTypeNone,     ledTypeNo },
    {"MixFader",     9, volumeTypeNone,     ledTypeNo },
    {"FltComb",      4, volumeTypeNone,     ledTypeNo },
    {"OscShpA",      5, volumeTypeNone,     ledTypeNo },
    {"OscDual",      5, volumeTypeNone,     ledTypeNo },
    {"DXRouter",     6, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"PShift",       3, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"ModAHD",       5, volumeTypeNone,     ledTypeNo },
    {"2-In",         2, volumeTypeNone,     ledTypeNo },
    {"4-In",         2, volumeTypeNone,     ledTypeNo },
    {"DlySingleA",   2, volumeTypeNone,     ledTypeNo },
    {"DlySingleB",   2, volumeTypeNone,     ledTypeNo },
    {"DelayDual",    3, volumeTypeNone,     ledTypeNo },
    {"DelayQuad",    5, volumeTypeNone,     ledTypeNo },
    {"DelayA",       3, volumeTypeNone,     ledTypeNo },
    {"DelayB",       4, volumeTypeNone,     ledTypeNo },
    {"DlyClock",     2, volumeTypeNone,     ledTypeNo },
    {"DlyShiftReg",  2, volumeTypeNone,     ledTypeNo },
    {"Operator",    12, volumeTypeNone,     ledTypeNo },
    {"DlyEight",     3, volumeTypeNone,     ledTypeNo },
    {"DlyStereo",    5, volumeTypeNone,     ledTypeNo },
    {"OscPM",        3, volumeTypeNone,     ledTypeNo },
    {"Mix1-1A",      2, volumeTypeNone,     ledTypeNo },
    {"Mix1-1S",      2, volumeTypeNone,     ledTypeNo },
    {"Sw1-2M",       2, volumeTypeNone,     ledTypeNo },
    {"Sw2-1M",       2, volumeTypeNone,     ledTypeNo },
    {"ConstSwM",     2, volumeTypeNone,     ledTypeNo },
    {"NoiseGate",    3, volumeTypeNone,     ledTypeNo },
    {"LfoB",         4, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"Phaser",       2, volumeTypeNone,     ledTypeNo },
    {"Mix4-1A",      2, volumeTypeNone,     ledTypeNo },
    {"Mix2-1A",      2, volumeTypeNone,     ledTypeNo },
    {"ModAmt",       2, volumeTypeNone,     ledTypeNo },
    {"OscPerc",      3, volumeTypeNone,     ledTypeNo },
    {"Status",       2, volumeTypeNone,     ledTypeNo },
    {"PitchTrack",   2, volumeTypeNone,     ledTypeNo },
    {"MonoKey",      2, volumeTypeNone,     ledTypeNo },
    {"RandomA",      2, volumeTypeNone,     ledTypeNo },
    {"Red2Blue",     2, volumeTypeNone,     ledTypeNo },
    {"RandomB",      3, volumeTypeNone,     ledTypeNo },
    {"Blue2Red",     2, volumeTypeNone,     ledTypeNo },
    {"RndClkA",      2, volumeTypeNone,     ledTypeNo },
    {"RndTrig",      2, volumeTypeNone,     ledTypeNo },
    {"RndClkB",      3, volumeTypeNone,     ledTypeNo },
    {"Unknown",      0, volumeTypeNone,     ledTypeNo },
    {"RndPattern",   3, volumeTypeNone,     ledTypeNo }, };

// moduleType, paramType1, paramType2, position rectangle, anchor, label, range, defaultValue, string map, colour map
const tParamLocation paramLocationList[] = {
    //  0 Unknown
    //  1 Keyboard -- No params
    //  2 Unknown
    //  3 4-Out
    {moduleType4toOut,     paramType1StandardToggle, paramType2Toggle, {{ 25,  -3}, { 7,  7}}, anchorBottomLeft,  "Out to",         3,   0, outTo4OutStrMap,        NULL          }, // 3 4-Out
    {moduleType4toOut,     paramType1Bypass,         paramType2Toggle, {{ 45,  -3}, { 5,  5}}, anchorBottomLeft,  "Bypass",         2,   0, NULL,                   NULL          },
    {moduleType4toOut,     paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  "Pad",            2,   0, padStrMap,              NULL          },
    // 4 2-Out
    {moduleType2toOut,     paramType1StandardToggle, paramType2Toggle, {{ 25,  -3}, { 7,  7}}, anchorBottomLeft,  "Out to",         6,   0, outToStrMap,            NULL          }, // 4 2-Out
    {moduleType2toOut,     paramType1Bypass,         paramType2Toggle, {{ 45,  -3}, { 5,  5}}, anchorBottomLeft,  "Bypass",         2,   0, NULL,                   NULL          },
    {moduleType2toOut,     paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  "Pad",            2,   0, padStrMap,              NULL          },
    //  5 Invert -- No params
    //  6 Unknown
    //  7 OscB
    {moduleTypeOscB,       paramType1OscFreq,        paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Tune",         128,  64, NULL,                   NULL          }, // 7 Tune
    {moduleTypeOscB,       paramType1Fine,           paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 7 Cent
    {moduleTypeOscB,       paramType1StandardToggle, paramType2Toggle, {{ 22, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 7 Kbt
    {moduleTypeOscB,       paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 7 Pitch M
    {moduleTypeOscB,       paramType1StandardToggle, paramType2Toggle, {{ 30,  15}, { 7,  7}}, anchorTopLeft,     NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 7 Pitch Type
    {moduleTypeOscB,       paramType1CommonDial,     paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  "FM",           128,   0, NULL,                   NULL          }, // FM M
    {moduleTypeOscB,       paramType1Shape,          paramType2Dial,   {{-15,   5}, { 7, 14}}, anchorTopRight,    "Shape",        128,   0, NULL,                   NULL          }, // 7 Shape 50% to 99%, not decimals
    {moduleTypeOscB,       paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "ShpM",         128,   0, NULL,                   NULL          }, // 7 Shape M
    {moduleTypeOscB,       paramType1StandardToggle, paramType2Toggle, {{-30,   5}, { 7,  7}}, anchorTopRight,    NULL,             5,   0, shapeTypeStrMap,        NULL          }, // 7 Waveform
    {moduleTypeOscB,       paramType1Bypass,         paramType2Toggle, {{ -3,   0}, { 5,  5}}, anchorMiddleRight, "Bypass",         2,   0, NULL,                   NULL          }, // 7 Bypass
    {moduleTypeOscB,       paramType1StandardToggle, paramType2Toggle, {{ 60,  15}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, fmTypeStrMap,           NULL          }, // 7 FM Type
    // 8 OscShpB
    {moduleTypeOscShpB,    paramType1OscFreq,        paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Tune",         128,  64, NULL,                   NULL          }, // 8 Tune
    {moduleTypeOscShpB,    paramType1Fine,           paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 8 Cent
    {moduleTypeOscShpB,    paramType1StandardToggle, paramType2Toggle, {{ 22, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 8 Kbt
    {moduleTypeOscShpB,    paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 8 Pitch M
    {moduleTypeOscShpB,    paramType1StandardToggle, paramType2Toggle, {{ 30,  15}, { 7,  7}}, anchorTopLeft,     NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 8 Pitch Type
    {moduleTypeOscShpB,    paramType1CommonDial,     paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  "FM",           128,   0, NULL,                   NULL          }, // FM M
    {moduleTypeOscShpB,    paramType1Shape,          paramType2Dial,   {{-15,   5}, { 7, 14}}, anchorTopRight,    "Shape",        128,   0, NULL,                   NULL          }, // 8 Shape 50% to 99%, not decimals
    {moduleTypeOscShpB,    paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "ShpCtrl",      128,   0, NULL,                   NULL          }, // 8 Shape M
    {moduleTypeOscShpB,    paramType1Bypass,         paramType2Toggle, {{ -3,   0}, { 5,  5}}, anchorMiddleRight, "Bypass",         2,   0, NULL,                   NULL          }, // 8 Bypass
    {moduleTypeOscShpB,    paramType1StandardToggle, paramType2Toggle, {{ 60,  15}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, fmTypeStrMap,           NULL          }, // 8 FM Type
    //  9 OscC
    {moduleTypeOscC,       paramType1OscFreq,        paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Tune",         128,  64, NULL,                   NULL          }, // 9 Coarse
    {moduleTypeOscC,       paramType1Fine,           paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 9 Fine
    {moduleTypeOscC,       paramType1StandardToggle, paramType2Toggle, {{ 22, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 9 Kbt
    {moduleTypeOscC,       paramType1StandardToggle, paramType2Toggle, {{ 30,  15}, { 7,  7}}, anchorTopLeft,     NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 9 Tune Mode
    {moduleTypeOscC,       paramType1CommonDial,     paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  "FM",           128,   0, NULL,                   NULL          }, // FM
    {moduleTypeOscC,       paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 9 Bypass
    {moduleTypeOscC,       paramType1StandardToggle, paramType2Toggle, {{ 70,  15}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, fmTypeStrMap,           NULL          }, // 9 FM Type
    {moduleTypeOscC,       paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // Pitch Mode
    // 10 Unknown
    // 11 Unknown
    // 12 Reverb
    {moduleTypeReverb,     paramType1CommonDial,     paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "Time",         128,  64, NULL,                   NULL          }, // 12 Time. Needs to check range
    {moduleTypeReverb,     paramType1CommonDial,     paramType2Dial,   {{ 37,  -3}, { 7, 14}}, anchorBottomLeft,  "Brightness",   128,  64, NULL,                   NULL          }, // 12 Brightness
    {moduleTypeReverb,     paramType1CommonDial,     paramType2Dial,   {{ 57,  -3}, { 7, 14}}, anchorBottomLeft,  "DryWet",       128,  64, NULL,                   NULL          }, // 12 DryWet
    {moduleTypeReverb,     paramType1Bypass,         paramType2Toggle, {{-20,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 12 Bypass
    // 13 OscString
    {moduleTypeOscString,  paramType1OscFreq,        paramType2Dial,   {{ 30,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 13 OscString Tune
    {moduleTypeOscString,  paramType1CommonDial,     paramType2Dial,   {{ 47,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 13 OscString Fine
    {moduleTypeOscString,  paramType1StandardToggle, paramType2Toggle, {{ 22,  -3}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 13 OscString Kbt
    {moduleTypeOscString,  paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 13 OscString Pitch modulation
    {moduleTypeOscString,  paramType1StandardToggle, paramType2Toggle, {{ 30,  10}, { 7,  7}}, anchorTopLeft,     NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 13 OscString Pitch mode
    {moduleTypeOscString,  paramType1CommonDial,     paramType2Dial,   {{ 59,  -3}, { 7, 14}}, anchorBottomLeft,  "Decay",        128,  64, NULL,                   NULL          }, // 13 OscString Decay
    {moduleTypeOscString,  paramType1CommonDial,     paramType2Dial,   {{ 71,  -3}, { 7, 14}}, anchorBottomLeft,  "Damp",         128,  64, NULL,                   NULL          }, // 13 OscString Damp
    {moduleTypeOscString,  paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 13 OscString Bypass
    // 14 Unknown
    // 15 Sw8-1 *** Needs more resources
    // 16 Unknown
    // 17 ValSw1-2
    {moduleTypeValSw1to2,    paramType1UpDown,     paramType2UpDown,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, u128StrMap,                   NULL          }, // 17 Val
    // 18 X-Fade
    {moduleTypeXtoFade,    paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 18 Mod
    {moduleTypeXtoFade,    paramType1Pan,            paramType2Dial,   {{ 55,   4}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 18 X-fade
    {moduleTypeXtoFade,    paramType1StandardToggle, paramType2Toggle, {{ 20,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, logStrMap,              NULL          },
    // 19 Mix4-1B
    {moduleTypeMix4to1B,   paramType1CommonDial,     paramType2Dial,   {{ 37,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 100, NULL,                   NULL          }, // 19 Lev1
    {moduleTypeMix4to1B,   paramType1CommonDial,     paramType2Dial,   {{ 52,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 100, NULL,                   NULL          }, // 19 Lev2
    {moduleTypeMix4to1B,   paramType1CommonDial,     paramType2Dial,   {{ 67,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 100, NULL,                   NULL          }, // 19 Lev3
    {moduleTypeMix4to1B,   paramType1CommonDial,     paramType2Dial,   {{ 82,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 100, NULL,                   NULL          }, // 19 Lev4
    {moduleTypeMix4to1B,   paramType1StandardToggle, paramType2Toggle, {{ 20,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, expStrMap,              NULL          }, // 19 ExpLinDB
    // 20 EnvvADSR
    {moduleTypeEnvADSR,    paramType1StandardToggle, paramType2Toggle, {{-26,  -3}, { 7,  7}}, anchorBottomRight, NULL,             4,   0, envShapeStrMap,         NULL          }, // 20 Env Shape
    {moduleTypeEnvADSR,    paramType1ADRTime,        paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "Attack",       128,   0, NULL,                   NULL          }, // 20 A
    {moduleTypeEnvADSR,    paramType1ADRTime,        paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Delay",        128,   0, NULL,                   NULL          }, // 20 D
    {moduleTypeEnvADSR,    paramType1CommonDial,     paramType2Dial,   {{ 44,  -3}, { 7, 14}}, anchorBottomLeft,  "Sus",          128, 100, NULL,                   NULL          }, // 20 S
    {moduleTypeEnvADSR,    paramType1ADRTime,        paramType2Dial,   {{ 56,  -3}, { 7, 14}}, anchorBottomLeft,  "Rel",          128,   0, NULL,                   NULL          }, // 20 R
    {moduleTypeEnvADSR,    paramType1StandardToggle, paramType2Toggle, {{-26, -10}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          }, // 20 Output Type
    {moduleTypeEnvADSR,    paramType1StandardToggle, paramType2Toggle, {{ 10,   8}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, kbStrMap,               offOnColourMap}, // 20 KB Active
    {moduleTypeEnvADSR,    paramType1StandardToggle, paramType2Toggle, {{  5,  -8}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, normalResetStrMap,      NULL          }, // 20 Normal/Reset
    // 21 Mux1-8 -- No params
    // 22 PartQuant
    {moduleTypePartQuant,  paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "Range",        128, 100, NULL,                   NULL          }, // 22 Range
    // 23 ModADSR
    {moduleTypeModADSR,    paramType1ADRTime,        paramType2Dial,   {{ 22, -17}, { 7, 14}}, anchorBottomLeft,  "A",            128,   0, NULL,                   NULL          }, // 22 A
    {moduleTypeModADSR,    paramType1ADRTime,        paramType2Dial,   {{ 37, -17}, { 7, 14}}, anchorBottomLeft,  "D",            128,   0, NULL,                   NULL          }, // 22 D
    {moduleTypeModADSR,    paramType1CommonDial,     paramType2Dial,   {{ 52, -17}, { 7, 14}}, anchorBottomLeft,  "S",            128, 100, NULL,                   NULL          }, // 22 S
    {moduleTypeModADSR,    paramType1ADRTime,        paramType2Dial,   {{ 67, -17}, { 7, 14}}, anchorBottomLeft,  "R",            128,   0, NULL,                   NULL          }, // 22 R
    {moduleTypeModADSR,    paramType1CommonDial,     paramType2Dial,   {{ 27,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 22 Attack M
    {moduleTypeModADSR,    paramType1CommonDial,     paramType2Dial,   {{ 42,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 22 Decay M
    {moduleTypeModADSR,    paramType1CommonDial,     paramType2Dial,   {{ 57,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 22 Sustain M
    {moduleTypeModADSR,    paramType1CommonDial,     paramType2Dial,   {{ 72,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 22 Release M
    {moduleTypeModADSR,    paramType1StandardToggle, paramType2Toggle, {{-15, -17}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          }, // 22 Output Type
    {moduleTypeModADSR,    paramType1StandardToggle, paramType2Toggle, {{  3, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, kbStrMap,               offOnColourMap}, // 22 KB
    // 24 LfoC
    {moduleTypeLfoC,       paramType1LFORate,        paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 24 Rate  *** Could have Freq but tied to Range
    {moduleTypeLfoC,       paramType1StandardToggle, paramType2Toggle, {{ 20,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, polyMonoStrMap,         NULL          }, // 24 Mode
    {moduleTypeLfoC,       paramType1StandardToggle, paramType2Toggle, {{ 76,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             6,   0, posStrMap,              NULL          }, // 24 OutType
    {moduleTypeLfoC,       paramType1StandardToggle, paramType2Toggle, {{ 30,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, rangeLfoCStrMap,        NULL          }, // 24 Range
    {moduleTypeLfoC,       paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 24 Bypass
    // 25 LfoShpA
    {moduleTypeLfoShpA,    paramType1LFORate,        paramType2Dial,   {{ 36,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 25 Rate
    {moduleTypeLfoShpA,    paramType1StandardToggle, paramType2Toggle, {{ 36, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             5,   0, rangeStrMap,            NULL          }, // 25 Range
    {moduleTypeLfoShpA,    paramType1StandardToggle, paramType2Toggle, {{ 25, -28}, { 7,  7}}, anchorBottomLeft,  "Kbt",            5,   0, offTo100KbStrMap,       NULL          }, // 25 Kbt
    {moduleTypeLfoShpA,    paramType1CommonDial,     paramType2Dial,   {{ 25,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 25 Rate M
    {moduleTypeLfoShpA,    paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 25 Bypass
    {moduleTypeLfoShpA,    paramType1CommonDial,     paramType2Dial,   {{ 57, -17}, { 7, 14}}, anchorBottomLeft,  "Shape",        128,   0, NULL,                   NULL          }, // 25 Shape
    {moduleTypeLfoShpA,    paramType1CommonDial,     paramType2Dial,   {{ 74,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 25 Phase M
    {moduleTypeLfoShpA,    paramType1CommonDial,     paramType2Dial,   {{ 74, -17}, { 7, 14}}, anchorBottomLeft,  "Phase",        128,  64, NULL,                   NULL          }, // 25 Phase
    {moduleTypeLfoShpA,    paramType1CommonDial,     paramType2Dial,   {{ 57,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 25 Shape M
    {moduleTypeLfoShpA,    paramType1StandardToggle, paramType2Toggle, {{ 25, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, polyMonoStrMap,         NULL          }, // 25 Mode
    {moduleTypeLfoShpA,    paramType1StandardToggle, paramType2Toggle, {{-10, -10}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          }, // 25 OutType
    {moduleTypeLfoShpA,    paramType1StandardToggle, paramType2Toggle, {{ 57, -32}, { 7,  7}}, anchorBottomLeft,  NULL,             6,   0, lfoShpAWaveStrMap,      NULL          }, // 25 Wave
    // 26 LfoA
    {moduleTypeLfoA,       paramType1LFORate,        paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 26 Rate
    {moduleTypeLfoA,       paramType1StandardToggle, paramType2Toggle, {{ 17, -10}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, polyMonoStrMap,         NULL          }, // 26 Mode
    {moduleTypeLfoA,       paramType1StandardToggle, paramType2Toggle, {{ 65,  -3}, { 7,  7}}, anchorBottomLeft,  "Kbt",            5,   0, offTo100KbStrMap,       NULL          }, // 26 Kbt
    {moduleTypeLfoA,       paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 26 Rate M
    {moduleTypeLfoA,       paramType1StandardToggle, paramType2Toggle, {{ 65, -10}, { 7,  7}}, anchorBottomLeft,  NULL,             6,   0, lfoWaveStrMap,          NULL          }, // 26 Wave
    {moduleTypeLfoA,       paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 26 Bypass
    {moduleTypeLfoA,       paramType1StandardToggle, paramType2Toggle, {{-10, -10}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          }, // 26 OutType
    {moduleTypeLfoA,       paramType1StandardToggle, paramType2Toggle, {{ 25,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, rangeStrMap,            NULL          }, // 26 Range
    // 27 OscMaster
    {moduleTypeOscMaster,  paramType1OscFreq,        paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,  64, NULL,                   NULL          }, // 27 Pitch
    {moduleTypeOscMaster,  paramType1Fine,           paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 27 Fine
    {moduleTypeOscMaster,  paramType1StandardToggle, paramType2Toggle, {{ 22,  -3}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 27 Kbt
    {moduleTypeOscMaster,  paramType1StandardToggle, paramType2Toggle, {{ 30,  15}, { 7,  7}}, anchorTopLeft,     NULL,             3,   0, pitchTypeStrMap,        NULL          }, // 27 Tune mode
    {moduleTypeOscMaster,  paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch M",      128,   0, NULL,                   NULL          }, // 27 Pitch M
    // 28 Saturate
    {moduleTypeSaturate,   paramType1CommonDial,     paramType2Dial,   {{ 54,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 28 Amount
    {moduleTypeSaturate,   paramType1CommonDial,     paramType2Dial,   {{ 41,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 28 AmountMod
    {moduleTypeSaturate,   paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 28 Bypass
    {moduleTypeSaturate,   paramType1StandardToggle, paramType2Toggle, {{ 70,  -6}, { 7,  7}}, anchorBottomLeft,  "Curve",          4,   0, saturateCurveStrMap,    NULL          }, // 28 Curve
    // 29 MetNoise
    {moduleTypeMetNoise,   paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "Color",        128,  64, NULL,                   NULL          }, // 29 Color
    {moduleTypeMetNoise,   paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,  64, NULL,                   NULL          }, // 29 Freq
    {moduleTypeMetNoise,   paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 28 Bypass
    {moduleTypeMetNoise,   paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 29 Freq M
    {moduleTypeMetNoise,   paramType1CommonDial,     paramType2Dial,   {{ 70,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 29 Color M
    // 30 Device - No controls
    // 31 Noise
    {moduleTypeNoise,      paramType1CommonDial,     paramType2Dial,   {{ 70,  -3}, { 7, 14}}, anchorBottomLeft,  "Color",        128,   0, NULL,                   NULL          }, // 31 Color  *** Or special dial
    {moduleTypeNoise,      paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 31 Bypass
    // 32 Eq2Band
    {moduleTypeEq2Band,    paramType1dB,             paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Lo (80Hz)",    128,  64, NULL,                   NULL          }, // 32 Lo Gain
    {moduleTypeEq2Band,    paramType1dB,             paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "Hi (12kHz)",   128,  64, NULL,                   NULL          }, // 32 Hi Gain
    {moduleTypeEq2Band,    paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  "Level",        128, 127, NULL,                   NULL          }, // 32 Level
    {moduleTypeEq2Band,    paramType1Bypass,         paramType2Toggle, {{ -3,  -9}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 32 Bypass
    {moduleTypeEq2Band,    paramType1StandardToggle, paramType2Toggle, {{ 30, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, eq2BandLoStrMap,        NULL          }, // 32 Lo Freq
    {moduleTypeEq2Band,    paramType1StandardToggle, paramType2Toggle, {{ 50, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   2, eq2BandHiStrMap,        NULL          }, // 32 Hi Freq
    // 33 Eq3Band
    {moduleTypeEq3band,    paramType1dB,             paramType2Dial,   {{  5,  -3}, { 7, 14}}, anchorBottomLeft,  "Lo",           128,  64, NULL,                   NULL          }, // 33 Lo Gain
    {moduleTypeEq3band,    paramType1dB,             paramType2Dial,   {{ 24,  -3}, { 7, 14}}, anchorBottomLeft,  "MidGn",        128,  64, NULL,                   NULL          }, // 33 Mid Gain
    {moduleTypeEq3band,    paramType1GeneralFreq,    paramType2Dial,   {{ 36,  -3}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,  64, NULL,                   NULL          }, // 33 Mid Freq
    {moduleTypeEq3band,    paramType1dB,             paramType2Dial,   {{ 55,  -3}, { 7, 14}}, anchorBottomLeft,  "Hi",           128,  64, NULL,                   NULL          }, // 33 Hi Gain
    {moduleTypeEq3band,    paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "Level",        128, 127, NULL,                   NULL          }, // 33 Level
    {moduleTypeEq3band,    paramType1Bypass,         paramType2Toggle, {{ -3,  -9}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 33 Bypass
    {moduleTypeEq3band,    paramType1StandardToggle, paramType2Toggle, {{  3, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, eq2BandLoStrMap,        NULL          }, // 33 Lo Freq
    {moduleTypeEq3band,    paramType1StandardToggle, paramType2Toggle, {{ 53, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   2, eq2BandHiStrMap,        NULL          }, // 33 Hi Freq
    // 34 ShpExp
    {moduleTypeShpExp,     paramType1CommonDial,     paramType2Dial,   {{ 54,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 34 Amount
    {moduleTypeShpExp,     paramType1CommonDial,     paramType2Dial,   {{ 41,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 34 AmountMod
    {moduleTypeShpExp,     paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 34 Bypass
    {moduleTypeShpExp,     paramType1StandardToggle, paramType2Toggle, {{ 70,  -6}, { 7,  7}}, anchorBottomLeft,  "Curve",          4,   0, shpExpCurveStrMap,      NULL          }, // 34 Curve
    // 35 Driver (Not in the Clavia editor)
    {moduleTypeDriver,     paramType1CommonDial,     paramType2Dial,   {{ 54,  -3}, { 7, 14}}, anchorBottomLeft,  "Stiffness",    128,   0, NULL,                   NULL          }, // 35 Embouchure
    {moduleTypeDriver,     paramType1CommonDial,     paramType2Dial,   {{ 75,  -3}, { 7, 14}}, anchorBottomLeft,  "Embouchure",   128,   0, NULL,                   NULL          }, // 35 Stiffness
    // 36 SwOnOffM
    {moduleTypeSwOnOffM,   paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, offOnStrMap,            NULL          }, // 36 On
    // 37 Unknown
    // 38 Pulse
    {moduleTypePulse,      paramType1PulseTime,      paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  "Time",         128,   0, NULL,                   NULL          }, // 38 Time
    {moduleTypePulse,      paramType1CommonDial,     paramType2Dial,   {{ 42,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 38 TimeMod
    {moduleTypePulse,      paramType1StandardToggle, paramType2Toggle, {{ 52,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, pulseRangeStrMap,       NULL          }, // 38 Range
    // 39 Unknown
    // 40 Mix8-1B
    {moduleTypeMix8to1B,   paramType1MixLevel,     paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 40 In1
    {moduleTypeMix8to1B,   paramType1MixLevel,     paramType2Dial,   {{ 29,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 40 In2
    {moduleTypeMix8to1B,   paramType1MixLevel,     paramType2Dial,   {{ 38,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 40 In3
    {moduleTypeMix8to1B,   paramType1MixLevel,     paramType2Dial,   {{ 47,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 40 In4
    {moduleTypeMix8to1B,   paramType1MixLevel,     paramType2Dial,   {{ 56,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 40 In5
    {moduleTypeMix8to1B,   paramType1MixLevel,     paramType2Dial,   {{ 65,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 40 In6
    {moduleTypeMix8to1B,   paramType1MixLevel,     paramType2Dial,   {{ 74,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 40 In7
    {moduleTypeMix8to1B,   paramType1MixLevel,     paramType2Dial,   {{ 83,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 40 In8
    {moduleTypeMix8to1B,   paramType1StandardToggle, paramType2Toggle, {{  3, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, expStrMap,              NULL          }, // 40 ExpLinDB
    {moduleTypeMix8to1B,   paramType1StandardToggle, paramType2Toggle, {{  3, -10}, { 7,  7}}, anchorBottomLeft,  "Pad",            3,   0, db12BPadStrMap,         NULL          }, // 40 Pad
    // 41 EnvH
    {moduleTypeEnvH,       paramType1ADRTime,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 41 Hold
    {moduleTypeEnvH,       paramType1StandardToggle, paramType2Toggle, {{-32,  -3}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          }, // 41 Pos
    // 42 Delay (Logic Delay)
    {moduleTypeDelay,      paramType1PulseTime,     paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  "Time",         128,   0, NULL,                   NULL          }, // 42 Time
    {moduleTypeDelay,      paramType1CommonDial,     paramType2Dial,   {{ 42,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 42 TimeMod
    {moduleTypeDelay,      paramType1StandardToggle, paramType2Toggle, {{ 52,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, pulseRangeStrMap,       NULL          }, // 42 Range

    // 43 Constant
    {moduleTypeConstant,   paramType1BipLevel,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 43 Value
    {moduleTypeConstant,   paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, bipUniStrMap,           NULL          }, // 43 Bip/Uni
    // 44 LevMult  - No Controls
    // 45 FltVoice
    {moduleTypeFltVoice,   paramType1StandardToggle, paramType2Toggle, {{ 40, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             9,   0, vowelStrMap,            NULL          }, // 45 Vowel1
    {moduleTypeFltVoice,   paramType1StandardToggle, paramType2Toggle, {{ 50, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             9,   1, vowelStrMap,            NULL          }, // 45 Vowel2
    {moduleTypeFltVoice,   paramType1StandardToggle, paramType2Toggle, {{ 60, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             9,   2, vowelStrMap,            NULL          }, // 45 Vowel3
    {moduleTypeFltVoice,   paramType1CommonDial,     paramType2Dial,   {{-15, -17}, { 7, 14}}, anchorBottomRight, NULL,           128,  80, NULL,                   NULL          }, // 45 Level
    {moduleTypeFltVoice,   paramType1BipLevel,     paramType2Dial,   {{ 55,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 45 Vowel
    {moduleTypeFltVoice,   paramType1CommonDial,     paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 45 VowelMod
    {moduleTypeFltVoice,   paramType1BipLevel,     paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,  80, NULL,                   NULL          }, // 45 Freq
    {moduleTypeFltVoice,   paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 45 FreqMod
    {moduleTypeFltVoice,   paramType1BipLevel,     paramType2Dial,   {{ 30,  -3}, { 7, 14}}, anchorBottomLeft,  "Res",          128,   0, NULL,                   NULL          }, // 45 Res
    {moduleTypeFltVoice,   paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 45 Bypass
    // 46 EnvAHD
    {moduleTypeEnvAHD,     paramType1StandardToggle, paramType2Toggle, {{-26,  -3}, { 7,  7}}, anchorBottomRight, NULL,             4,   0, envShapeStrMap,         NULL          }, // 46 Shape
    {moduleTypeEnvAHD,     paramType1ADRTime,        paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "Attack",       128,   0, NULL,                   NULL          }, // 46 Attack
    {moduleTypeEnvAHD,     paramType1ADRTime,     paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Hold",         128,   0, NULL,                   NULL          }, // 46 Hold
    {moduleTypeEnvAHD,     paramType1StandardToggle, paramType2Toggle, {{  5, -15}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, normalResetStrMap,      NULL          }, // 46 Reset
    {moduleTypeEnvAHD,     paramType1ADRTime,        paramType2Dial,   {{ 44,  -3}, { 7, 14}}, anchorBottomLeft,  "Release",        128,   0, NULL,                   NULL          }, // 46 Release
    {moduleTypeEnvAHD,     paramType1StandardToggle, paramType2Toggle, {{-26, -10}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          },
    {moduleTypeEnvAHD,     paramType1StandardToggle, paramType2Toggle, {{ 10,   8}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, kbStrMap,               offOnColourMap},
    // 47 Pan
    {moduleTypePan,        paramType1CommonDial,     paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 47 PanMod
    {moduleTypePan,        paramType1LRDial,         paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 47 Pan
    {moduleTypePan,        paramType1StandardToggle, paramType2Toggle, {{ 10,  -5}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, logStrMap,              NULL          }, // 47 LogLin
    // 48 MixStereo
    {moduleTypeMixStereo,  paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 48 Lvl1
    {moduleTypeMixStereo,  paramType1CommonDial,     paramType2Dial,   {{ 22,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 48 Lvl2
    {moduleTypeMixStereo,  paramType1CommonDial,     paramType2Dial,   {{ 34,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 48 Lvl3
    {moduleTypeMixStereo,  paramType1CommonDial,     paramType2Dial,   {{ 48,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 48 Lvl4
    {moduleTypeMixStereo,  paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 48 Lvl5
    {moduleTypeMixStereo,  paramType1CommonDial,     paramType2Dial,   {{ 72,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  80, NULL,                   NULL          }, // 48 Lvl6
    {moduleTypeMixStereo,  paramType1LRDial,         paramType2Dial,   {{ 10, -17}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 48 Pan1
    {moduleTypeMixStereo,  paramType1LRDial,         paramType2Dial,   {{ 22, -17}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 48 Pan2
    {moduleTypeMixStereo,  paramType1LRDial,         paramType2Dial,   {{ 34, -17}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 48 Pan3
    {moduleTypeMixStereo,  paramType1LRDial,         paramType2Dial,   {{ 46, -17}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 48 Pan4
    {moduleTypeMixStereo,  paramType1LRDial,         paramType2Dial,   {{ 58, -17}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 48 Pan5
    {moduleTypeMixStereo,  paramType1LRDial,         paramType2Dial,   {{ 70, -17}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 48 Pan6
    {moduleTypeMixStereo,  paramType1CommonDial,     paramType2Dial,   {{ -7, -25}, { 7, 14}}, anchorBottomRight, NULL,           128,  80, NULL,                   NULL          }, // 48 LvlMaster
    // 49 FltMulti
    {moduleTypeFltMulti,   paramType1Freq,           paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,   0, NULL,                   NULL          }, // 49 Freq
    {moduleTypeFltMulti,   paramType1Pitch,          paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 49 Pitch M
    {moduleTypeFltMulti,   paramType1StandardToggle, paramType2Toggle, {{ 25, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            5,   4, offTo100KbStrMap,       NULL          }, // 49 Kbt
    {moduleTypeFltMulti,   paramType1StandardToggle, paramType2Toggle, {{ 55,   5}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, gcStrMap,               offOnColourMap}, // 49 GC
    {moduleTypeFltMulti,   paramType1Resonance,      paramType2Dial,   {{ 55,  -3}, { 7, 14}}, anchorBottomLeft,  "Res",          128,   0, NULL,                   NULL          }, // 49 Res
    {moduleTypeFltMulti,   paramType1StandardToggle, paramType2Toggle, {{ 70, -10}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, fltMultiDbStrMap,       NULL          }, // 49 dB
    {moduleTypeFltMulti,   paramType1Bypass,         paramType2Toggle, {{-17,  -3}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 49 Bypass
    // 50 ConstSwT
    {moduleTypeConstSwT,   paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 50 Value
    {moduleTypeConstSwT,   paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, offOnStrMap,            offOnColourMap}, // 50 Switch
    {moduleTypeConstSwT,   paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, bipUniStrMap,           NULL          }, // 50 Bip/Uni
    // 51 FltNord
    {moduleTypeFltNord,    paramType1Freq,           paramType2Dial,   {{ 30, -25}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,   0, NULL,                   NULL          }, // 51 Freq
    {moduleTypeFltNord,    paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 51 Pitch M
    {moduleTypeFltNord,    paramType1StandardToggle, paramType2Toggle, {{ 15, -25}, { 7,  7}}, anchorBottomLeft,  "Kbt",            5,   4, offTo100KbStrMap,       NULL          }, // 51 Kbt
    {moduleTypeFltNord,    paramType1StandardToggle, paramType2Toggle, {{ 40, -15}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, gcStrMap,               offOnColourMap}, // 51 GC
    {moduleTypeFltNord,    paramType1Resonance,      paramType2Dial,   {{ 55, -25}, { 7, 14}}, anchorBottomLeft,  "Res",          128,   0, NULL,                   NULL          }, // 51 Res
    {moduleTypeFltNord,    paramType1StandardToggle, paramType2Toggle, {{ 70, -10}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, fltNordDbStrMap,        NULL          }, // 51 dB/Oct
    {moduleTypeFltNord,    paramType1Bypass,         paramType2Toggle, {{-17,  -3}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 51 Bypass
    {moduleTypeFltNord,    paramType1CommonDial,     paramType2Dial,   {{ 31,  -3}, { 7, 14}}, anchorBottomLeft,  "Fm Lin",       128,   0, NULL,                   NULL          }, // 51 Fm Lin
    {moduleTypeFltNord,    paramType1StandardToggle, paramType2Toggle, {{ 70, -20}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, nordFilterTypeStrMap,   NULL          }, // 51 FilterType
    {moduleTypeFltNord,    paramType1CommonDial,     paramType2Dial,   {{ 55,  -3}, { 7, 14}}, anchorBottomLeft,  "Res M",        128,   0, NULL,                   NULL          }, // 51 Res M
    // 52 EnvMulti
    {moduleTypeEnvMulti,   paramType1CommonDial,     paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "L1",           128, 127, NULL,                   NULL          }, // 52 Lvl1
    {moduleTypeEnvMulti,   paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "L1",           128, 127, NULL,                   NULL          }, // 52 Lvl2
    {moduleTypeEnvMulti,   paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "L1",           128, 127, NULL,                   NULL          }, // 52 Lvl3
    {moduleTypeEnvMulti,   paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "L1",           128, 127, NULL,                   NULL          }, // 52 Lvl4
    {moduleTypeEnvMulti,   paramType1ADRTime,        paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  "T1",           128,   0, NULL,                   NULL          }, // 52 Time1
    {moduleTypeEnvMulti,   paramType1ADRTime,        paramType2Dial,   {{ 30,  -3}, { 7, 14}}, anchorBottomLeft,  "T2",           128,   0, NULL,                   NULL          }, // 52 Time2
    {moduleTypeEnvMulti,   paramType1ADRTime,        paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  "T3",           128,   0, NULL,                   NULL          }, // 52 Time3
    {moduleTypeEnvMulti,   paramType1ADRTime,        paramType2Dial,   {{ 70,  -3}, { 7, 14}}, anchorBottomLeft,  "T4",           128,   0, NULL,                   NULL          }, // 52 Time4
    {moduleTypeEnvMulti,   paramType1StandardToggle, paramType2Toggle, {{  3, -22}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, normalResetStrMap,      NULL          }, // 52 Reset
    {moduleTypeEnvMulti,   paramType1StandardToggle, paramType2Toggle, {{ 30, -22}, { 7,  7}}, anchorBottomLeft,  "Sust",           5,   1, multiEnvSustainStrMap,  NULL          }, // 52 SustainPlacement
    {moduleTypeEnvMulti,   paramType1StandardToggle, paramType2Toggle, {{-17, -29}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          }, // 52 OutType
    {moduleTypeEnvMulti,   paramType1StandardToggle, paramType2Toggle, {{ 10,  17}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, kbStrMap,               offOnColourMap}, // 52 Kbt
    {moduleTypeEnvMulti,   paramType1StandardToggle, paramType2Toggle, {{-26, -17}, { 7,  7}}, anchorBottomRight, NULL,             4,   0, envShapeStrMap,         NULL          }, // 52 Shape
    // 53 SandH -- No parameters
    // 54 FltStatic
    {moduleTypeFltStatic,  paramType1Freq,           paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,   0, NULL,                   NULL          }, // 54 Freq
    {moduleTypeFltStatic,  paramType1Resonance,      paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Res",          128,   0, NULL,                   NULL          }, // 54 Res
    {moduleTypeFltStatic,  paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, staticFilterTypeStrMap, NULL          }, // 54 FilterType
    {moduleTypeFltStatic,  paramType1Bypass,         paramType2Toggle, {{ -3,   2}, { 5,  5}}, anchorMiddleRight, NULL,             2,   1, NULL,                   NULL          }, // 54 Bypass
    {moduleTypeFltStatic,  paramType1StandardToggle, paramType2Toggle, {{ 80,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, gcStrMap,               offOnColourMap}, // 54 GC
    // 55 EnvD
    {moduleTypeEnvD,       paramType1ADRTime,        paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Decay",        128,   0, NULL,                   NULL          }, // 55 Decay
    {moduleTypeEnvD,       paramType1StandardToggle, paramType2Toggle, {{ 55,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             6,   0, posStrMap,              NULL          }, // 55 OutType
    // 56 Resonator (Not in Clavia editor)
    {moduleTypeResonator,  paramType1OscFreq,        paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Tune",         128,  64, NULL,                   NULL          }, // 56 Tune
    {moduleTypeResonator,  paramType1Fine,           paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 56 Cent
    {moduleTypeResonator,  paramType1StandardToggle, paramType2Toggle, {{ 15, -20}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 56 Kbt
    {moduleTypeResonator,  paramType1CommonDial,     paramType2Dial,   {{ 17,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 56 Pitch M
    {moduleTypeResonator,  paramType1StandardToggle, paramType2Toggle, {{ 30,  12}, { 7,  7}}, anchorTopLeft,     NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 56 Pitch Type
    {moduleTypeResonator,  paramType1CommonDial,     paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  "Decay",        128,   0, NULL,                   NULL          }, // 56 Decay
    {moduleTypeResonator,  paramType1CommonDial,     paramType2Dial,   {{ 62, -17}, { 7, 14}}, anchorBottomLeft,  "Damp",         128,   0, NULL,                   NULL          }, // 56 Damp
    {moduleTypeResonator,  paramType1Bypass,         paramType2Toggle, {{ -3,  -3}, { 5,  5}}, anchorMiddleRight, "Bypass",         2,   0, NULL,                   NULL          }, // 56 Bypass
    {moduleTypeResonator,  paramType1CommonDial,     paramType2Dial,   {{ 75, -17}, { 7, 14}}, anchorBottomLeft,  "Pos",          128,   0, NULL,                   NULL          }, // 56 Pos
    {moduleTypeResonator,  paramType1StandardToggle, paramType2Toggle, {{ 30,  20}, { 7,  7}}, anchorTopLeft,     "Alg",            4,   0, pitchTypeStrMap,        NULL          }, // 56 Algorithm *** Check values
    // 57 Automate *** We lack an UI element for the CTRL selector
    // 58 Drumsynth
    {moduleTypeDrumSynth,  paramType1FreqDrum,       paramType2Dial,   {{ 20, -22}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 100, NULL,                   NULL          }, // 58 Master Freq
    {moduleTypeDrumSynth,  paramType1CommonDial,     paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 58 Slave Ratio
    {moduleTypeDrumSynth,  paramType1ADRTime,        paramType2Dial,   {{ 30, -22}, { 7, 14}}, anchorBottomLeft,  "Dcy",          128,   0, NULL,                   NULL          }, // 58 MasterDecay
    {moduleTypeDrumSynth,  paramType1ADRTime,        paramType2Dial,   {{ 30,  -3}, { 7, 14}}, anchorBottomLeft,  "Dcy",          128,   0, NULL,                   NULL          }, // 58 Slave Decay
    {moduleTypeDrumSynth,  paramType1CommonDial,     paramType2Dial,   {{ 40, -22}, { 7, 14}}, anchorBottomLeft,  "Lvl",          128, 100, NULL,                   NULL          }, // 58 Master Level
    {moduleTypeDrumSynth,  paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Lvl",          128, 100, NULL,                   NULL          }, // 58 Slave Level
    {moduleTypeDrumSynth,  paramType1Freq,           paramType2Dial,   {{ 50, -22}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,   0, NULL,                   NULL          }, // 58 Noise Filter Freq
    {moduleTypeDrumSynth,  paramType1Resonance,      paramType2Dial,   {{ 60, -22}, { 7, 14}}, anchorBottomLeft,  "Res",          128,   0, NULL,                   NULL          }, // 54 Noise Filter Res
    {moduleTypeDrumSynth,  paramType1CommonDial,     paramType2Dial,   {{ 70, -22}, { 7, 14}}, anchorBottomLeft,  "Swp",          128,   0, NULL,                   NULL          }, // 58 Noise Filter Sweep
    {moduleTypeDrumSynth,  paramType1ADRTime,        paramType2Dial,   {{ 80, -22}, { 7, 14}}, anchorBottomLeft,  "Dcy",          128,   0, NULL,                   NULL          }, // 58 Noise Filter Decay
    {moduleTypeDrumSynth,  paramType1StandardToggle, paramType2Toggle, {{ 90, -22}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, staticFilterTypeStrMap, NULL          }, // 58 Noise FilterType
    {moduleTypeDrumSynth,  paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  "Bend",         128,   0, NULL,                   NULL          }, // 58 Bend Amount
    {moduleTypeDrumSynth,  paramType1ADRTime,        paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "Dcy",          128,   0, NULL,                   NULL          }, // 58 BendDecay
    {moduleTypeDrumSynth,  paramType1CommonDial,     paramType2Dial,   {{ 70,  -3}, { 7, 14}}, anchorBottomLeft,  "Click",        128,   0, NULL,                   NULL          }, // 58 Click Amount
    {moduleTypeDrumSynth,  paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "Noise",        128,   0, NULL,                   NULL          }, // 58 Noise Amount
    {moduleTypeDrumSynth,  paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 58 Bypass
    //{moduleTypeDrumSynth,   paramType1StandardToggle, paramType2Toggle, {{ 60, -35}, {7,  7}}, anchorBottomLeft,  NULL,        1,  0, drSynthPresetStrMap,   NULL          }, // 58 Preset *** Length must be updated  // TODO: Only 16 parameters on this one, decide which one is wrong

    // 59 CompLev
    {moduleTypeCompLev,    paramType1BipLevel,       paramType2Dial,   {{ 70,  -3}, { 7, 14}}, anchorBottomLeft,  "C",            128,  64, NULL,                   NULL          }, // 59 Compare Level
    // 60 Mux8-1X
    {moduleTypeMux8to1X,   paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "X-fade",       128,   0, NULL,                   NULL          }, // 58 X-fade
    // 61 Clip
    {moduleTypeClip,       paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 61 Clip level M
    {moduleTypeClip,       paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 61 Clip level
    {moduleTypeClip,       paramType1StandardToggle, paramType2Toggle, {{ 10,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, asymSymStrMap,          NULL          }, // 61 Shape
    {moduleTypeClip,       paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 61 Bypass
    // 62 OverDrive
    {moduleTypeOverdrive,  paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 62 Amount M
    {moduleTypeOverdrive,  paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 62 Amount
    {moduleTypeOverdrive,  paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 62 Bypass
    {moduleTypeOverdrive,  paramType1StandardToggle, paramType2Toggle, {{ 15,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, odTypeStrMap,           NULL          }, // 62 Type
    {moduleTypeOverdrive,  paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, asymSymStrMap,          NULL          }, // 62 Shape
    // 63 Scratch
    {moduleTypeScratch,    paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 63 Ratio
    {moduleTypeScratch,    paramType1CommonDial,     paramType2Dial,   {{ 15,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 63 Ratio Mod
    {moduleTypeScratch,    paramType1StandardToggle, paramType2Toggle, {{ 75,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, delayStrMap,            NULL          }, // 63 Delay
    {moduleTypeScratch,    paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 63 Bypass
    // 64 Gate (Logic Gate) -- no parameters, 2 modes
    // 65 Unknown
    // 66 Mix2-1B
    {moduleTypeMix2to1B,   paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, invStrMap,              NULL          }, // 66 Inv1
    {moduleTypeMix2to1B,   paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 100, NULL,                   NULL          }, // 66 Lvl1
    {moduleTypeMix2to1B,   paramType1StandardToggle, paramType2Toggle, {{ 65,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, invStrMap,              NULL          }, // 66 Inv2
    {moduleTypeMix2to1B,   paramType1CommonDial,     paramType2Dial,   {{ 75,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 100, NULL,                   NULL          }, // 66 Lvl2
    {moduleTypeMix2to1B,   paramType1StandardToggle, paramType2Toggle, {{ 20,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, expStrMap,              NULL          }, // 66 ExpLinDB
    // 67 Unknown
    // 68 ClkGen
    {moduleTypeClkGen,     paramType1CommonDial,     paramType2Dial,   {{ 60, -17}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 100, NULL,                   NULL          }, // 68 Tempo *** needs new dial 24-214 BPM
    {moduleTypeClkGen,     paramType1Bypass,         paramType2Toggle, {{ 70, -17}, { 5,  5}}, anchorBottomLeft,  NULL,             2,   1, NULL,                   NULL          }, // 68 Bypass
    {moduleTypeClkGen,     paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  "Source",         2,   0, clkSrcStrMap,           NULL          }, // 66 Clk Source
    {moduleTypeClkGen,     paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  "Sync every",    16,   3, int16StrMap,            NULL          }, // 66 BeatSync
    {moduleTypeClkGen,     paramType1CommonDial,     paramType2Dial,   {{ 25,  -3}, { 7, 14}}, anchorBottomLeft,  "Swing",        128,   0, NULL,                   NULL          }, // 68 Swing
    // 69 ClkDiv
    {moduleTypeClkDiv,     paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 69 Divider *** needs other UI element

    // 70 Unknown
    // 71 EnvFollow
    {moduleTypeEnvFollow,  paramType1ADRTime,        paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "Attack",       128,   0, NULL,                   NULL          }, // 71 Attack *** check values
    {moduleTypeEnvFollow,  paramType1ADRTime,        paramType2Dial,   {{ 35,  -3}, { 7, 14}}, anchorBottomLeft,  "Release",      128,   0, NULL,                   NULL          }, // 71 Attack *** check values
    // 72 NoteScaler
    {moduleTypeNoteScaler, paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Range",        128,   0, NULL,                   NULL          }, // 72 Range *** needs UI element
    // 73 Unknown
    // 74 WaveWrap
    {moduleTypeWaveWrap,   paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 74 Amount Mod
    {moduleTypeWaveWrap,   paramType1CommonDial,     paramType2Dial,   {{ 55,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 74 Amount
    {moduleTypeWaveWrap,   paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 74 Bypass
    // 75 NoteQuant
    {moduleTypeNoteQuant,  paramType1CommonDial,     paramType2Dial,   {{ 25,  -3}, { 7, 14}}, anchorBottomLeft,  "Range",        128, 127, NULL,                   NULL          }, // 75 Range
    {moduleTypeNoteQuant,  paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Notes",        128,   0, NULL,                   NULL          }, // 75 Notes
    // 76 SwOnOffT
    {moduleTypeSwOnOffT,   paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, offOnStrMap,            NULL          }, // 76 On
    // 77 Unknown
    // 78 Sw1-8
    {moduleTypeSw1to8,     paramType1StandardToggle, paramType2Toggle, {{ 40, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             8,   0, out8StrMap,             NULL          }, // 78 Selector
    // 79 Sw4-1
    {moduleTypeSw4to1,     paramType1StandardToggle, paramType2Toggle, {{ 40, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, in8StrMap,              NULL          }, // 79 Selector
    // 80 Unknown
    // 81 LevAmp
    {moduleTypeLevAmp,     paramType1LevAmpDial,     paramType2Dial,   {{ 70,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 81 Gain
    {moduleTypeLevAmp,     paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   1, expStrMap,              NULL          }, // 81 Type
    // 82 Rect
    {moduleTypeRect,       paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, rectStrMap,             NULL          }, // 82 Mode
    {moduleTypeRect,       paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 82 Bypass
    // 83 ShpStatic
    {moduleTypeShpStatic,  paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, shpStaticStrMap,        NULL          }, // 83 Mode
    {moduleTypeShpStatic,  paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 83 Bypass
    // 84 EnvADR
    {moduleTypeEnvADR,     paramType1StandardToggle, paramType2Toggle, {{ 70, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, envShapeStrMap,         NULL          }, // 84 Shape
    {moduleTypeEnvADR,     paramType1ADRTime,        paramType2Dial,   {{ 35,  -3}, { 7, 14}}, anchorBottomLeft,  "Attack",       128,   0, NULL,                   NULL          }, // 84 Attack
    {moduleTypeEnvADR,     paramType1StandardToggle, paramType2Toggle, {{ 28, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, normalResetStrMap,      NULL          }, // 84 Reset
    {moduleTypeEnvADR,     paramType1ADRTime,        paramType2Dial,   {{ 55,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 84 Release/Decay time
    {moduleTypeEnvADR,     paramType1StandardToggle, paramType2Toggle, {{ 10,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, trigGateStrMap,         NULL          }, // 84 Trig/Gate
    {moduleTypeEnvADR,     paramType1StandardToggle, paramType2Toggle, {{ 70, -10}, { 7,  7}}, anchorBottomLeft,  NULL,             6,   0, posStrMap,              NULL          },
    {moduleTypeEnvADR,     paramType1StandardToggle, paramType2Toggle, {{  3, -10}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, kbStrMap,               offOnColourMap},
    {moduleTypeEnvADR,     paramType1StandardToggle, paramType2Toggle, {{ 52, -12}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, decayReleaseStrMap,     NULL          }, // 84 Decay/Release toggle
    // 85 WindSw
    {moduleTypeWindSw,     paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "From",         128,   0, NULL,                   NULL          }, // 85 From
    {moduleTypeWindSw,     paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "To",           128,   0, NULL,                   NULL          }, // 85 To
    // 86 8Counter -- No controls
    // 87 FltLP
    {moduleTypeFltLP,      paramType1Freq,           paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 87 Freq
    {moduleTypeFltLP,      paramType1CommonDial,     paramType2Dial,   {{ 35,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 87 FreqMod
    {moduleTypeFltLP,      paramType1StandardToggle, paramType2Toggle, {{ 10,  -3}, { 7,  7}}, anchorBottomLeft,  "Kbt",            5,   4, offTo100KbStrMap,       NULL          },
    //{moduleTypeFltLP, paramType1StandardToggle, paramType2Toggle, {{ 67, -3}, {7,  7}}, anchorBottomLeft,  "Slope",       6,  2, fltLPSlopeStrMap,   NULL          }, // TODO: Possibly one of these should be a mode - only expecting 5 params
    {moduleTypeFltLP,      paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 83 Bypass
    // 88 Sw1-4
    {moduleTypeSw1to4,     paramType1StandardToggle, paramType2Toggle, {{ 37,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, out8StrMap,             NULL          }, // 88 Selector
    // 89 Flanger
    {moduleTypeFlanger,    paramType1CommonDial,     paramType2Dial,   {{ 35,  -3}, { 7, 14}}, anchorBottomLeft,  "Rate",         128,  64, NULL,                   NULL          }, // 89 Rate
    {moduleTypeFlanger,    paramType1CommonDial,     paramType2Dial,   {{ 55,  -3}, { 7, 14}}, anchorBottomLeft,  "Range",        128,  64, NULL,                   NULL          }, // 89 Range
    {moduleTypeFlanger,    paramType1CommonDial,     paramType2Dial,   {{ 75,  -3}, { 7, 14}}, anchorBottomLeft,  "Feedback",     128,  64, NULL,                   NULL          }, // 89 Feedback
    {moduleTypeFlanger,    paramType1Bypass,         paramType2Toggle, {{ -3,  -8}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 89 Bypass
    // 90 Sw1-2
    {moduleTypeSw1to2,     paramType1StandardToggle, paramType2Toggle, {{ 37,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, out8StrMap,             NULL          }, // 90 Selector
    // 91 FlipFlop
    // 92 FltClassic
    {moduleTypeFltClassic, paramType1Freq,           paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,   0, NULL,                   NULL          }, // 92
    {moduleTypeFltClassic, paramType1Pitch,          paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  "Env",          128,   0, NULL,                   NULL          },
    {moduleTypeFltClassic, paramType1StandardToggle, paramType2Toggle, {{ 25, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            5,   4, offTo100KbStrMap,       NULL          },
    {moduleTypeFltClassic, paramType1Resonance,      paramType2Dial,   {{ 55,  -3}, { 7, 14}}, anchorBottomLeft,  "Res",          128,   0, NULL,                   NULL          },
    {moduleTypeFltClassic, paramType1StandardToggle, paramType2Toggle, {{ 70, -10}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, fltClassicDbStrMap,     NULL          },
    {moduleTypeFltClassic, paramType1Bypass,         paramType2Toggle, {{ -3,   0}, { 5,  5}}, anchorMiddleRight, NULL,             2,   1, NULL,                   NULL          },
    // 93 Unknown
    // 94 StChorus
    {moduleTypeStChorus,   paramType1CommonDial,     paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "Detune",       128,   0, NULL,                   NULL          }, // 94
    {moduleTypeStChorus,   paramType1CommonDial,     paramType2Dial,   {{ 35,  -3}, { 7, 14}}, anchorBottomLeft,  "Amount",       128,   0, NULL,                   NULL          },
    {moduleTypeStChorus,   paramType1Bypass,         paramType2Toggle, {{ -3,   0}, { 5,  5}}, anchorMiddleRight, NULL,             2,   1, NULL,                   NULL          },
    // 95 Unknown
    // 96 OscD
    {moduleTypeOscD,       paramType1Freq,           paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Tune",         128,  64, NULL,                   NULL          }, // 96 Tune
    {moduleTypeOscD,       paramType1CommonDial,     paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 96 Fine
    {moduleTypeOscD,       paramType1StandardToggle, paramType2Toggle, {{ 22, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 96 Kbt
    {moduleTypeOscD,       paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 96 Pitch M
    {moduleTypeOscD,       paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 96 Bypass

    // 97 OscA
    {moduleTypeOscA,       paramType1Freq,           paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Tune",         128,  64, NULL,                   NULL          }, // 97 Tune
    {moduleTypeOscA,       paramType1CommonDial,     paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 97 Fine
    {moduleTypeOscA,       paramType1StandardToggle, paramType2Toggle, {{ 22, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 97 Kbt
    {moduleTypeOscA,       paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 97 Pitch M
    {moduleTypeOscA,       paramType1StandardToggle, paramType2Toggle, {{-20,   5}, { 7,  7}}, anchorTopRight,    NULL,             6,   0, shapeOscATypeStrMap,    NULL          }, // 97 Waveform
    {moduleTypeOscA,       paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 97 Bypass
    {moduleTypeOscA,       paramType1StandardToggle, paramType2Toggle, {{ 30,  10}, { 7,  7}}, anchorTopLeft,     NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 97 Pitch Type

    // 98 FreqShift
    {moduleTypeFreqShift,  paramType1Freq,           paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "FreqShift",    128,  64, NULL,                   NULL          }, // 98 FreqShift
    {moduleTypeFreqShift,  paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 98 Mod
    {moduleTypeFreqShift,  paramType1StandardToggle, paramType2Toggle, {{ 60, -10}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, freqShiftRangeStrMap,   NULL          }, // 98 Range
    {moduleTypeFreqShift,  paramType1Bypass,         paramType2Toggle, {{-10, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 98 Bypass
    // 99 Unknown
    // 100 Sw2-1
    {moduleTypeSw2to1,     paramType1StandardToggle, paramType2Toggle, {{ 50,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, in8StrMap,              NULL          }, // 100 Selector
    // 101 Unknown
    // 102 FltPhase
    {moduleTypeFltPhase,   paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 102 Pitch M
    {moduleTypeFltPhase,   paramType1Freq,           paramType2Dial,   {{ 22, -10}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,   0, NULL,                   NULL          }, // 102 Freq
    {moduleTypeFltPhase,   paramType1CommonDial,     paramType2Dial,   {{ 42,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 102 Spread M
    {moduleTypeFltPhase,   paramType1CommonDial,     paramType2Dial,   {{ 57, -17}, { 7, 14}}, anchorBottomLeft,  "FB",           128,  64, NULL,                   NULL          }, // 102 FB
    {moduleTypeFltPhase,   paramType1StandardToggle, paramType2Toggle, {{ 70,  -3}, { 7,  7}}, anchorBottomLeft,  "Notch",          6,   4, int16StrMap,            NULL          }, // 102 Notch count
    {moduleTypeFltPhase,   paramType1CommonDial,     paramType2Dial,   {{ 38, -17}, { 7, 14}}, anchorBottomLeft,  "Spread",       128,  64, NULL,                   NULL          }, // 102 Spread
    {moduleTypeFltPhase,   paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 102 Bypass
    {moduleTypeFltPhase,   paramType1CommonDial,     paramType2Dial,   {{ 83,  -3}, { 7, 14}}, anchorBottomLeft,  "Level",        128,   0, NULL,                   NULL          }, // 102 Level
    {moduleTypeFltPhase,   paramType1CommonDial,     paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 102 FB Mod
    {moduleTypeFltPhase,   paramType1StandardToggle, paramType2Toggle, {{ 68, -12}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, fltPhaseTypeStrMap,     NULL          }, // 102 Type
    {moduleTypeFltPhase,   paramType1StandardToggle, paramType2Toggle, {{  3, -22}, { 7,  7}}, anchorBottomLeft,  "Kbt",            5,   4, offTo100KbStrMap,       NULL          }, // 102 Kbt
    // 103 EqPeak
    {moduleTypeEqPeak,     paramType1Freq,           paramType2Dial,   {{ 22,  -3}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,  64, NULL,                   NULL          }, // 103 Freq
    {moduleTypeEqPeak,     paramType1BipLevel,       paramType2Dial,   {{ 42,  -3}, { 7, 14}}, anchorBottomLeft,  "Gain",         128,  64, NULL,                   NULL          }, // 103 Gain
    {moduleTypeEqPeak,     paramType1CommonDial,     paramType2Dial,   {{ 62, -10}, { 7, 14}}, anchorBottomLeft,  "BW",           128,  64, NULL,                   NULL          }, // 103 BW *** needs UI element
    {moduleTypeEqPeak,     paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 103 Bypass
    {moduleTypeEqPeak,     paramType1CommonDial,     paramType2Dial,   {{ 83,  -3}, { 7, 14}}, anchorBottomLeft,  "Level",        128, 127, NULL,                   NULL          }, // 102 Level

    // 104 Unknown
    // 105 ValSw2-1
    {moduleTypeValSw2to1,    paramType1UpDown,     paramType2UpDown,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, u128StrMap,                   NULL          }, // 105 Val
    // 106 OscNoise
    {moduleTypeOscNoise,   paramType1Freq,           paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Tune",         128,  64, NULL,                   NULL          }, // 106 Tune
    {moduleTypeOscNoise,   paramType1CommonDial,     paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 106 Fine
    {moduleTypeOscNoise,   paramType1StandardToggle, paramType2Toggle, {{ 22, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 97 Kbt
    {moduleTypeOscNoise,   paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 97 Pitch M
    {moduleTypeOscNoise,   paramType1StandardToggle, paramType2Toggle, {{ 30,   6}, { 7,  7}}, anchorTopLeft,     NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 97 Pitch Type
    {moduleTypeOscNoise,   paramType1CommonDial,     paramType2Dial,   {{ 75,  -3}, { 7, 14}}, anchorBottomLeft,  "Width",        128,  64, NULL,                   NULL          }, // 106 Width
    {moduleTypeOscNoise,   paramType1CommonDial,     paramType2Dial,   {{ 65,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 106 Width M
    {moduleTypeOscNoise,   paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 106 Bypass

    // 107 Unknown
    // 108 Vocoder
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 10,  -3}, { 5,  7}}, anchorBottomLeft,  "1",             17,   1, vocoderStrMap,          NULL          }, // 108 BandSel 1
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 15,  -3}, { 5,  7}}, anchorBottomLeft,  "2",             17,   2, vocoderStrMap,          NULL          }, // 108 BandSel 2
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 20,  -3}, { 5,  7}}, anchorBottomLeft,  "3",             17,   3, vocoderStrMap,          NULL          }, // 108 BandSel 3
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 25,  -3}, { 5,  7}}, anchorBottomLeft,  "4",             17,   4, vocoderStrMap,          NULL          }, // 108 BandSel 4
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 30,  -3}, { 5,  7}}, anchorBottomLeft,  "5",             17,   5, vocoderStrMap,          NULL          }, // 108 BandSel 5
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 35,  -3}, { 5,  7}}, anchorBottomLeft,  "6",             17,   6, vocoderStrMap,          NULL          }, // 108 BandSel 6
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 5,  7}}, anchorBottomLeft,  "7",             17,   7, vocoderStrMap,          NULL          }, // 108 BandSel 7
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 45,  -3}, { 5,  7}}, anchorBottomLeft,  "8",             17,   8, vocoderStrMap,          NULL          }, // 108 BandSel 8
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 50,  -3}, { 5,  7}}, anchorBottomLeft,  "9",             17,   9, vocoderStrMap,          NULL          }, // 108 BandSel 9
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 55,  -3}, { 5,  7}}, anchorBottomLeft,  "10",            17,  10, vocoderStrMap,          NULL          }, // 108 BandSel 10
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 5,  7}}, anchorBottomLeft,  "11",            17,  11, vocoderStrMap,          NULL          }, // 108 BandSel 11
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 65,  -3}, { 5,  7}}, anchorBottomLeft,  "12",            17,  12, vocoderStrMap,          NULL          }, // 108 BandSel 12
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 70,  -3}, { 5,  7}}, anchorBottomLeft,  "13",            17,  13, vocoderStrMap,          NULL          }, // 108 BandSel 13
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 75,  -3}, { 5,  7}}, anchorBottomLeft,  "14",            17,  14, vocoderStrMap,          NULL          }, // 108 BandSel 14
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 80,  -3}, { 5,  7}}, anchorBottomLeft,  "15",            17,  15, vocoderStrMap,          NULL          }, // 108 BandSel 15
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 85,  -3}, { 5,  7}}, anchorBottomLeft,  "16",            17,  16, vocoderStrMap,          NULL          }, // 108 BandSel 16
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{  3, -12}, { 7,  7}}, anchorBottomLeft,  "Emp",            2,   0, offOnStrMap,            NULL          }, // 108 Emphasis
    {moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{  3, -24}, { 7,  7}}, anchorBottomLeft,  "Mon",            2,   0, offOnStrMap,            NULL          }, // 108 Monitor
    //{moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 10, -24}, { 7,  7}}, anchorBottomLeft,  "-2",             1,   0, presetStrMap,           NULL          }, // 108 Preset -2  // TODO: should only be 18 parameters on this!
    //{moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 17, -24}, { 7,  7}}, anchorBottomLeft,  "-1",             1,   0, presetStrMap,           NULL          }, // 108 Preset -1
    //{moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 24, -24}, { 7,  7}}, anchorBottomLeft,  "-0",             1,   0, presetStrMap,           NULL          }, // 108 Preset 0
    //{moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 31, -24}, { 7,  7}}, anchorBottomLeft,  "+1",             1,   0, presetStrMap,           NULL          }, // 108 Preset +1
    //{moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 38, -24}, { 7,  7}}, anchorBottomLeft,  "+2",             1,   0, presetStrMap,           NULL          }, // 108 Preset +2
    //{moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 45, -24}, { 7,  7}}, anchorBottomLeft,  "Inv",            1,   0, presetStrMap,           NULL          }, // 108 Preset Inv
    //{moduleTypeVocoder,    paramType1StandardToggle, paramType2Toggle, {{ 52, -24}, { 7,  7}}, anchorBottomLeft,  "Rnd",            1,   0, presetStrMap,           NULL          }, // 108 Preset Rnd
    // 109 Unknown
    // 110 Unknown
    // 111 Unknown
    // 112 LevAdd
    {moduleTypeLevAdd,     paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 112 Constant
    {moduleTypeLevAdd,     paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, bipUniStrMap,           NULL          }, // 112 Bip/Uni
    // 113 Fade1-2
    {moduleTypeFade1to2,   paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 113 Mix
    {moduleTypeFade1to2,   paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 113 Mix M
    // 114 Fade2-1
    {moduleTypeFade2to1,   paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 114 Mix
    {moduleTypeFade2to1,   paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 114 Mix M
    // 115 LevScaler
    {moduleTypeLevScaler,  paramType1dB,             paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "L",            128,  64, NULL,                   NULL          }, // 115 Left slope +- 8 db/oct
    {moduleTypeLevScaler,  paramType1CommonDial,     paramType2Dial,   {{ 55,  -3}, { 7, 14}}, anchorBottomLeft,  "BP",           128,  64, NULL,                   NULL          }, // 115 BreakPoint
    {moduleTypeLevScaler,  paramType1dB,             paramType2Dial,   {{ 70,  -3}, { 7, 14}}, anchorBottomLeft,  "R",            128,  64, NULL,                   NULL          }, // 115 Right slope +- 8 db/oct
    {moduleTypeLevScaler,  paramType1StandardToggle, paramType2Toggle, {{ 22,  -3}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 115 Kbt
    // 116 Mix8-1A
    {moduleTypeMix8to1A,   paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  "Pad",            3,   0, db12BPadStrMap,         NULL          }, // 116 Pad
    // 117 LevMod
    {moduleTypeLevMod,     paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 117 ModDepth
    {moduleTypeLevMod,     paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 117 ModType
    // 118 Digitizer
    {moduleTypeDigitizer,  paramType1StandardToggle, paramType2Toggle, {{ 80,  -3}, { 7,  7}}, anchorBottomLeft,  "Bits",          13,  11, bitsStrMap,             NULL          }, // 118 Bits
    {moduleTypeDigitizer,  paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "Sample Rate",  128,  64, NULL,                   NULL          }, // 118 Rate
    {moduleTypeDigitizer,  paramType1CommonDial,     paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "Rate",         128,   0, NULL,                   NULL          }, // 118 Rate M
    {moduleTypeDigitizer,  paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 106 Bypass
    // 119 EnvADDSR
    {moduleTypeEnvADDSR,   paramType1StandardToggle, paramType2Toggle, {{ 10,   8}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, kbStrMap,               offOnColourMap}, // 119 Kb
    {moduleTypeEnvADDSR,   paramType1StandardToggle, paramType2Toggle, {{-30, -31}, { 7,  7}}, anchorBottomRight, NULL,             4,   0, envShapeStrMap,         NULL          }, // 119 Shape
    {moduleTypeEnvADDSR,   paramType1ADRTime,        paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "A",            128,   0, NULL,                   NULL          }, // 119 A
    {moduleTypeEnvADDSR,   paramType1ADRTime,        paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "D1",           128,   0, NULL,                   NULL          }, // 119 D1
    {moduleTypeEnvADDSR,   paramType1CommonDial,     paramType2Dial,   {{ 44,  -3}, { 7, 14}}, anchorBottomLeft,  "L1",           128,   0, NULL,                   NULL          }, // 119 L1
    {moduleTypeEnvADDSR,   paramType1ADRTime,        paramType2Dial,   {{ 56,  -3}, { 7, 14}}, anchorBottomLeft,  "D2",           128,   0, NULL,                   NULL          }, // 119 D2
    {moduleTypeEnvADDSR,   paramType1CommonDial,     paramType2Dial,   {{ 68,  -3}, { 7, 14}}, anchorBottomLeft,  "L2",           128,   0, NULL,                   NULL          }, // 119 L2
    {moduleTypeEnvADDSR,   paramType1ADRTime,        paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "R",            128,   0, NULL,                   NULL          }, // 119 R
    {moduleTypeEnvADDSR,   paramType1StandardToggle, paramType2Toggle, {{ 20, -24}, { 7,  7}}, anchorBottomLeft,  "Sustain",        2,   0, sustainStrMap,          NULL          }, // 119 Sustainmode
    {moduleTypeEnvADDSR,   paramType1StandardToggle, paramType2Toggle, {{-30, -24}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          }, // 119 Pos
    {moduleTypeEnvADDSR,   paramType1StandardToggle, paramType2Toggle, {{  5,  -8}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, normalResetStrMap,      NULL          }, // 119 Reset

    // 120 Unknown
    // 121 SeqNote
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  3,  10}, { 7,  7}}, anchorTopLeft,     "Cycl",           2,   0, offOnStrMap,            offOnColourMap},         // 121 Cycle
    {moduleTypeSeqNote,    paramType1UpDown,         paramType2UpDown, {{  0, -60}, {14, 14}}, anchorBottomRight, NULL,             8,   5, octaveStrMap,           NULL          },         // 121 Octave
    {moduleTypeSeqNote,    paramType1UpDown,         paramType2UpDown, {{  0, -50}, {14, 14}}, anchorBottomRight, "Length",        16,  15, int16StrMap,            NULL          },         // 121 Octave
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, -40}, {10,  7}}, anchorBottomRight, "Clr",            1,   0, emptyStrMap,            NULL          },         // 121 Clear
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, -30}, {10,  7}}, anchorBottomRight, "Rnd",            1,   0, emptyStrMap,            NULL          },         // 121 Randomize
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    {moduleTypeSeqNote,    paramType1StandardToggle, paramType2Toggle, {{  0, 0}, {1,  1}}, anchorBottomRight, NULL,            1,   0, emptyStrMap,            NULL          },         // 121 Dummy for now
    // 122 Unknown
    // 123 Mix4-1C
    {moduleTypeMix4to1C,   paramType1CommonDial,     paramType2Dial,   {{ 20,  15}, { 7, 14}}, anchorTopLeft,     NULL,           128,   0, NULL,                   NULL          }, // 123 L1
    {moduleTypeMix4to1C,   paramType1CommonDial,     paramType2Dial,   {{ 35,  15}, { 7, 14}}, anchorTopLeft,     NULL,           128,   0, NULL,                   NULL          }, // 123 L2
    {moduleTypeMix4to1C,   paramType1CommonDial,     paramType2Dial,   {{ 50,  15}, { 7, 14}}, anchorTopLeft,     NULL,           128,   0, NULL,                   NULL          }, // 123 L3
    {moduleTypeMix4to1C,   paramType1CommonDial,     paramType2Dial,   {{ 65,  15}, { 7, 14}}, anchorTopLeft,     NULL,           128,   0, NULL,                   NULL          }, // 123 L4
    {moduleTypeMix4to1C,   paramType1Enable,         paramType2Toggle, {{ 26,  10}, { 3,  3}}, anchorTopLeft,     NULL,             2,   0, NULL,                   offOnColourMap}, // 123 Enable1
    {moduleTypeMix4to1C,   paramType1Enable,         paramType2Toggle, {{ 41,  10}, { 3,  3}}, anchorTopLeft,     NULL,             2,   0, NULL,                   offOnColourMap}, // 123 Enable2
    {moduleTypeMix4to1C,   paramType1Enable,         paramType2Toggle, {{ 56,  10}, { 3,  3}}, anchorTopLeft,     NULL,             2,   0, NULL,                   offOnColourMap}, // 123 Enable3
    {moduleTypeMix4to1C,   paramType1Enable,         paramType2Toggle, {{ 71,  10}, { 3,  3}}, anchorTopLeft,     NULL,             2,   0, NULL,                   offOnColourMap}, // 123 Enable4
    {moduleTypeMix4to1C,   paramType1StandardToggle, paramType2Toggle, {{  3,  20}, { 7,  7}}, anchorTopLeft,     "Pad",            2,   0, padStrMap,              NULL          }, // 123 Pad
    {moduleTypeMix4to1C,   paramType1StandardToggle, paramType2Toggle, {{  3,  10}, { 7,  7}}, anchorTopLeft,     NULL,             3,   0, expStrMap,              NULL          }, // 123 Exp
    // 124 Mux8-1 -- No params
    // 125 WahWah
    {moduleTypeWahWah,     paramType1Freq,           paramType2Dial,   {{ 35,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 125 Sweep M
    {moduleTypeWahWah,     paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 125 Sweep
    {moduleTypeWahWah,     paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 125 Bypass
    // 126 Name
    // 127 Fx-In
    {moduleTypeFxtoIn,     paramType1StandardToggle, paramType2Toggle, {{ 25,  -3}, { 7,  7}}, anchorBottomLeft,  "In FX",          2,   0, inFxStrMap,             NULL          }, // 127 In
    {moduleTypeFxtoIn,     paramType1Bypass,         paramType2Toggle, {{-35,  -3}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 127 Bypass
    {moduleTypeFxtoIn,     paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  "Pad",            4,   0, db12PadStrMap,          NULL          }, // 127 Pad
    // 128 MinMax -- No params
    // 128 Unknown
    // 130 BinCounter -- No params
    // 131 ADConv  -- No params
    // 132 DAConv -- No params
    // 133 Unknown
    // 134 FltHP
    {moduleTypeFltHP,      paramType1Freq,           paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 134 Freq
    {moduleTypeFltHP,      paramType1CommonDial,     paramType2Dial,   {{ 35,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 134 FreqMod
    {moduleTypeFltHP,      paramType1StandardToggle, paramType2Toggle, {{ 10,  -3}, { 7,  7}}, anchorBottomLeft,  "Kbt",            5,   4, offTo100KbStrMap,       NULL          }, // 134 Kbt
    {moduleTypeFltHP,      paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 134 Bypass
    // 135 Unknown
    // 136 Unknown
    // 137 Unknown
    // 138 Unknown
    // 139 T&H -- No params
    // 140 Mix4-1S
    {moduleTypeMix4to1S,   paramType1CommonDial,     paramType2Dial,   {{ 15, -10}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 123 L1
    {moduleTypeMix4to1S,   paramType1CommonDial,     paramType2Dial,   {{ 35, -10}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 123 L2
    {moduleTypeMix4to1S,   paramType1CommonDial,     paramType2Dial,   {{ 55, -10}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 123 L3
    {moduleTypeMix4to1S,   paramType1CommonDial,     paramType2Dial,   {{ 75, -10}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 123 L4
    {moduleTypeMix4to1S,   paramType1Enable,         paramType2Toggle, {{  3,  -3}, {14,  4}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 123 Enable1
    {moduleTypeMix4to1S,   paramType1Enable,         paramType2Toggle, {{ 23,  -3}, {14,  4}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 123 Enable2
    {moduleTypeMix4to1S,   paramType1Enable,         paramType2Toggle, {{ 43,  -3}, {14,  4}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 123 Enable3
    {moduleTypeMix4to1S,   paramType1Enable,         paramType2Toggle, {{ 63,  -3}, {14,  4}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 123 Enable4
    {moduleTypeMix4to1S,   paramType1StandardToggle, paramType2Toggle, {{ 40, -25}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, expStrMap,              NULL          }, // 123 Exp
    // 141 CtrlSend
    {moduleTypeCtrlSend,   paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Ctrl",         128,   1, NULL,                   NULL          }, // 141 Ctrl
    {moduleTypeCtrlSend,   paramType1CommonDial,     paramType2Dial,   {{ 75,  -3}, { 7, 14}}, anchorBottomLeft,  "Value",        128,   1, NULL,                   NULL          }, // 141 Ctrl
    {moduleTypeCtrlSend,   paramType1StandardToggle, paramType2Toggle, {{ 85,  -3}, { 7,  7}}, anchorBottomLeft,  "Chan",          21,   0, midiChanStrMap,         NULL          }, // 141 Channel
    // 142 PCSend
    {moduleTypePCSend,     paramType1CommonDial,     paramType2Dial,   {{ 75,  -3}, { 7, 14}}, anchorBottomLeft,  "Program",      128,   1, NULL,                   NULL          }, // 142 Program
    {moduleTypePCSend,     paramType1StandardToggle, paramType2Toggle, {{ 85,  -3}, { 7,  7}}, anchorBottomLeft,  "Chan",          21,   0, midiChanStrMap,         NULL          }, // 142 Channel
    // 143 NoteSend
    {moduleTypeNoteSend,   paramType1CommonDial,     paramType2Dial,   {{ 42,  -3}, { 7, 14}}, anchorBottomLeft,  "Vel",          128, 100, NULL,                   NULL          }, // 143 Vel
    {moduleTypeNoteSend,   paramType1NoteDial,       paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  "Note",         128,  64, NULL,                   NULL          }, // 143 Ctrl
    {moduleTypeNoteSend,   paramType1StandardToggle, paramType2Toggle, {{ 85,  -3}, { 7,  7}}, anchorBottomLeft,  "Chan",          21,   0, midiChanStrMap,         NULL          }, // 143 Channel
    // 144 SeqEvent
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 20, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-1
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 24, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-2
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 28, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-3
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 32, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-4
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 36, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-5
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 40, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-6
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 44, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-7
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 48, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-8
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 52, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-9
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 56, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-10
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 60, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-11
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 64, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-12
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 68, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-13
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 72, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-14
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 76, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-15
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 80, -15}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step1-16
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 20,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-1
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 24,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-2
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 28,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-3
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 32,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-4
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 36,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-5
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 40,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-6
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 44,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-7
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 48,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-8
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 52,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-9
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 56,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-10
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 60,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-11
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 64,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-12
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 68,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-13
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 72,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-14
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 76,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-15
    {moduleTypeSeqEvent,   paramType1Enable,         paramType2Toggle, {{ 80,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-16
    {moduleTypeSeqEvent,   paramType1StandardToggle, paramType2Toggle, {{  3,  10}, { 7,  7}}, anchorTopLeft,     "Cycl",           2,   0, offOnStrMap,            offOnColourMap}, // 121 Cycle
    {moduleTypeSeqEvent,   paramType1UpDown,         paramType2UpDown, {{-10, -30}, {14, 14}}, anchorBottomRight, "Length",        16,  15, int16StrMap,            NULL          }, // 121 Length
    {moduleTypeSeqEvent,   paramType1StandardToggle, paramType2Toggle, {{ 88, -16}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, trigGateStrMap,         NULL          }, // 144 T up
    {moduleTypeSeqEvent,   paramType1StandardToggle, paramType2Toggle, {{ 88,  -4}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, trigGateStrMap,         NULL          }, // 144 T down
    // 145 SeqVal
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 20, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 29, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 38, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 47, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 56, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 65, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 74, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 83, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 20, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 29, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 38, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 47, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 56, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 65, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 74, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{ 83, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 20, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-1
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 29, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-2
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 38, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-3
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 47, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-4
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 56, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-5
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 65, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-68
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 74, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-7
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 83, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-8
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 20,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-9
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 29,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-10
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 38,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-11
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 47,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-12
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 56,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-13
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 65,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-14
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 74,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-15
    {moduleTypeSeqVal,     paramType1Enable,         paramType2Toggle, {{ 83,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-16
    {moduleTypeSeqVal,     paramType1StandardToggle, paramType2Toggle, {{  3,  10}, { 7,  7}}, anchorTopLeft,     "Cycl",           2,   0, offOnStrMap,            offOnColourMap}, // 144 Cycle
    {moduleTypeSeqVal,     paramType1UpDown,         paramType2UpDown, {{-15, -55}, {14, 14}}, anchorBottomRight, "Length",        16,  15, int16StrMap,            NULL          }, // 144 Length
    {moduleTypeSeqVal,     paramType1StandardToggle, paramType2Toggle, {{  3,  20}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, bipUniStrMap,           NULL          }, // 144 Cycle
    {moduleTypeSeqVal,     paramType1StandardToggle, paramType2Toggle, {{  3,  -4}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, trigGateStrMap,         NULL          }, // 144 T down
    {moduleTypeSeqVal,     paramType1StandardToggle, paramType2Toggle, {{ 35, -60}, {10,  7}}, anchorBottomLeft,  "Clr",            1,   0, emptyStrMap,            NULL          }, // 144 Clear
    {moduleTypeSeqVal,     paramType1StandardToggle, paramType2Toggle, {{ 45, -60}, {10,  7}}, anchorBottomLeft,  "Rnd",            1,   0, emptyStrMap,            NULL          }, // 144 Randomize
    // 146 SeqLev
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 20, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 29, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 38, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 47, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 56, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 65, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 74, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 83, -38}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 20, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 29, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 38, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 47, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 56, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 65, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 74, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{ 83, -24}, {10, 10}}, anchorBottomLeft,  NULL,           128,   0, bip128StrMap,           NULL          }, // Step1-1
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 20, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-1
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 29, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-2
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 38, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-3
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 47, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-4
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 56, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-5
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 65, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-68
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 74, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-7
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 83, -15}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-8
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 20,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-9
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 29,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-10
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 38,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-11
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 47,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-12
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 56,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-13
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 65,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-14
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 74,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-15
    {moduleTypeSeqLev,     paramType1Enable,         paramType2Toggle, {{ 83,  -3}, { 8,  8}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 144 Step2-16
    {moduleTypeSeqLev,     paramType1StandardToggle, paramType2Toggle, {{  3,  10}, { 7,  7}}, anchorTopLeft,     "Cycl",           2,   0, offOnStrMap,            offOnColourMap}, // 144 Cycle
    {moduleTypeSeqLev,     paramType1UpDown,         paramType2UpDown, {{-15, -55}, {14, 14}}, anchorBottomRight, "Length",        16,  15, int16StrMap,            NULL          }, // 144 Length
    {moduleTypeSeqLev,     paramType1StandardToggle, paramType2Toggle, {{  3,  20}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, bipUniStrMap,           NULL          }, // 144 Cycle
    {moduleTypeSeqLev,     paramType1StandardToggle, paramType2Toggle, {{  3,  -4}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, trigGateStrMap,         NULL          }, // 144 T down
    {moduleTypeSeqLev,     paramType1StandardToggle, paramType2Toggle, {{ 35, -60}, {10,  7}}, anchorBottomLeft,  "Clr",            1,   0, emptyStrMap,            NULL          }, // 144 Clear
    {moduleTypeSeqLev,     paramType1StandardToggle, paramType2Toggle, {{ 45, -60}, {10,  7}}, anchorBottomLeft,  "Rnd",            1,   0, emptyStrMap,            NULL          }, // 144 Randomize

    // 147 CtrRcv
    {moduleTypeCtrlRcv,    paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Ctrl",         128,  64, NULL,                   NULL          }, // 147 Ctrl
    {moduleTypeCtrlRcv,    paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  "Chan",          18,  17, midiChanRcvStrMap,      NULL          }, // 147 Channel
    // 148 NoteRcv
    {moduleTypeNoteRcv,    paramType1NoteDial,       paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Note",         128,  64, NULL,                   NULL          }, // 148 Note
    {moduleTypeNoteRcv,    paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  "Chan",          18,  17, midiChanRcvStrMap,      NULL          }, // 148 Channel
    // 149 NoteZone
    {moduleTypeNoteZone,   paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  "RChan",         18,  17, midiChanRcvStrMap,      NULL          }, // 149 Receive Channel
    {moduleTypeNoteZone,   paramType1NoteDial,       paramType2Dial,   {{ 23,  -3}, { 7, 14}}, anchorBottomLeft,  "Min",          128,   0, NULL,                   NULL          }, // 149 Min note
    {moduleTypeNoteZone,   paramType1NoteDial,       paramType2Dial,   {{ 43,  -3}, { 7, 14}}, anchorBottomLeft,  "Max",          128, 127, NULL,                   NULL          }, // 149 Max note
    {moduleTypeNoteZone,   paramType1CommonDial,     paramType2Dial,   {{ 63,  -3}, { 7, 14}}, anchorBottomLeft,  "Trans",        128,  64, NULL,                   NULL          }, // 149 Transpose
    {moduleTypeNoteZone,   paramType1StandardToggle, paramType2Toggle, {{ 83,  -3}, { 7,  7}}, anchorBottomLeft,  "SChan",         21,   0, midiChanStrMap,         NULL          }, // 149 Send Channel
    {moduleTypeNoteZone,   paramType1StandardToggle, paramType2Toggle, {{ 60, -17}, { 7,  7}}, anchorBottomLeft,  "Thru",           2,   0, thruStrMap,             NULL          }, // 149 Thru mode
    // 150 Compress
    {moduleTypeCompress,   paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  "Thr",           43,   0, NULL,                   NULL          }, // 150
    {moduleTypeCompress,   paramType1CommonDial,     paramType2Dial,   {{ 24,  -3}, { 7, 14}}, anchorBottomLeft,  "Ratio",         67,   0, NULL,                   NULL          },
    {moduleTypeCompress,   paramType1CommonDial,     paramType2Dial,   {{ 38,  -3}, { 7, 14}}, anchorBottomLeft,  "Att",          128,   0, NULL,                   NULL          },
    {moduleTypeCompress,   paramType1CommonDial,     paramType2Dial,   {{ 52,  -3}, { 7, 14}}, anchorBottomLeft,  "Rel",          128,   0, NULL,                   NULL          },
    {moduleTypeCompress,   paramType1CommonDial,     paramType2Dial,   {{ 66,  -3}, { 7, 14}}, anchorBottomLeft,  "RefLvl",        43,   0, NULL,                   NULL          },
    {moduleTypeCompress,   paramType1StandardToggle, paramType2Toggle, {{ 27,   5}, { 7,  7}}, anchorTopLeft,     NULL,             2,   1, sideChainStrMap,        offOnColourMap},
    {moduleTypeCompress,   paramType1Bypass,         paramType2Toggle, {{ -3,   0}, { 5,  5}}, anchorMiddleRight, NULL,             2,   1, NULL,                   NULL          },
    // 151 Unknown
    // 152 KeyQuant
    {moduleTypeKeyQuant,   paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Range",        128,   0, NULL,                   NULL          }, // 152 Range
    {moduleTypeKeyQuant,   paramType1StandardToggle, paramType2Toggle, {{ 20,   5}, { 7,  7}}, anchorTopLeft,     "Capture",        2,   0, captureStrMap,          NULL          },
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 60,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note E
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 64,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note F
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 66,  -7}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note F#
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 68,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note G
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 70,  -7}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note G#
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 72,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note A
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 74,  -7}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note A#
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 76,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note B
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 52,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note C
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 54,  -7}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note C#
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 56,  -3}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note D
    {moduleTypeKeyQuant,   paramType1Enable,         paramType2Toggle, {{ 58,  -7}, { 3,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 152 Note D#
    // 153 Unknown
    // 154 SeqCtr
    // 155 Unknown
    // 156 NoteDet
    {moduleTypeNoteDet,    paramType1NoteDial,       paramType2Dial,   {{ 23,  -3}, { 7, 14}}, anchorBottomLeft,  "Note",         128,  64, NULL,                   NULL          }, // 156 Note
    // 157 LevConv
    {moduleTypeLevConv,    paramType1StandardToggle, paramType2Toggle, {{-15,  -1}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          }, // 157 OutType
    {moduleTypeLevConv,    paramType1StandardToggle, paramType2Toggle, {{-57,  -3}, { 7,  7}}, anchorBottomRight, "Input",          3,   0, levConvStrMap,          NULL          }, // 157 In Signal Type
    // 158 Glide
    {moduleTypeGlide,      paramType1Time,           paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "Time",         128,   0, NULL,                   NULL          }, // 158 Time
    {moduleTypeGlide,      paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, offOnStrMap,            NULL          }, // 158 Glide on/off
    {moduleTypeGlide,      paramType1StandardToggle, paramType2Toggle, {{ 70,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, logStrMap,              NULL          }, // 158 Shape
    // 159 CompSig -- no params
    // 160 ZeroCnt -- no params
    // 161 MixFader -- skip for now
    // 162 FltComb
    {moduleTypeFltComb,    paramType1Freq,           paramType2Dial,   {{ 22, -10}, { 7, 14}}, anchorBottomLeft,  "Freq",         128,   0, NULL,                   NULL          }, // 102 Freq
    {moduleTypeFltComb,    paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 102 Pitch M
    {moduleTypeFltComb,    paramType1StandardToggle, paramType2Toggle, {{  3, -22}, { 7,  7}}, anchorBottomLeft,  "Kbt",            5,   4, offTo100KbStrMap,       NULL          }, // 102 Kbt
    {moduleTypeFltComb,    paramType1CommonDial,     paramType2Dial,   {{ 57, -17}, { 7, 14}}, anchorBottomLeft,  "FB",           128,  64, NULL,                   NULL          }, // 102 FB
    {moduleTypeFltComb,    paramType1CommonDial,     paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 102 FB Mod
    {moduleTypeFltComb,    paramType1StandardToggle, paramType2Toggle, {{ 68, -12}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, fltPhaseTypeStrMap,     NULL          }, // 102 Type
    {moduleTypeFltComb,    paramType1CommonDial,     paramType2Dial,   {{ 83,  -3}, { 7, 14}}, anchorBottomLeft,  "Level",        128,   0, NULL,                   NULL          }, // 102 Level
    {moduleTypeFltComb,    paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, NULL,             2,   1, NULL,                   NULL          }, // 102 Bypass
    // 163 OscShpA
    {moduleTypeOscShpA,    paramType1Freq,           paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,  64, NULL,                   NULL          }, // 163 Coarse
    {moduleTypeOscShpA,    paramType1CommonDial,     paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 163 Fine
    {moduleTypeOscShpA,    paramType1StandardToggle, paramType2Toggle, {{ 22, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 163 Kbt
    {moduleTypeOscShpA,    paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 163 Pitch M
    {moduleTypeOscShpA,    paramType1StandardToggle, paramType2Toggle, {{ 15,  15}, { 7,  7}}, anchorTopLeft,     NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 163 Tune M
    {moduleTypeOscShpA,    paramType1CommonDial,     paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  "FM",           128,   0, NULL,                   NULL          }, // FM
    {moduleTypeOscShpA,    paramType1StandardToggle, paramType2Toggle, {{ 60,  15}, { 7,  7}}, anchorTopLeft,     NULL,             2,   0, fmTypeStrMap,           NULL          }, // FM Pitch Track
    {moduleTypeOscShpA,    paramType1CommonDial,     paramType2Dial,   {{-15,   5}, { 7, 14}}, anchorTopRight,    "Shape",        128,   0, NULL,                   NULL          }, // 50% to 99%, not decimals
    {moduleTypeOscShpA,    paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "ShpCtrl",      128,   0, NULL,                   NULL          }, // 163 Shape M
    {moduleTypeOscShpA,    paramType1StandardToggle, paramType2Toggle, {{ 30,  15}, { 7,  7}}, anchorTopLeft,     NULL,             6,   0, oscShpAStrMap,          NULL          }, // 163 Wave
    {moduleTypeOscShpA,    paramType1Bypass,         paramType2Toggle, {{ -3,   0}, { 5,  5}}, anchorMiddleRight, "Bypass",         2,   0, NULL,                   NULL          },
    // 164 OscDual
    {moduleTypeOscDual,    paramType1Freq,           paramType2Dial,   {{ 25,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,  64, NULL,                   NULL          }, // 164 Coarse
    {moduleTypeOscDual,    paramType1CommonDial,     paramType2Dial,   {{ 35,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 164 Fine
    {moduleTypeOscDual,    paramType1StandardToggle, paramType2Toggle, {{ 12, -20}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 164 Kbt
    {moduleTypeOscDual,    paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 164 Pitch M
    {moduleTypeOscDual,    paramType1StandardToggle, paramType2Toggle, {{ 25, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 164 Tune M
    {moduleTypeOscDual,    paramType1CommonDial,     paramType2Dial,   {{ 75, -17}, { 7, 14}}, anchorBottomLeft,  "SqrLvl",       128, 100, NULL,                   NULL          }, // 164 SqrLvl
    {moduleTypeOscDual,    paramType1CommonDial,     paramType2Dial,   {{ 65, -17}, { 7, 14}}, anchorBottomLeft,  "PW",           128,   0, NULL,                   NULL          }, // 164 PW
    {moduleTypeOscDual,    paramType1CommonDial,     paramType2Dial,   {{ 75,  -3}, { 7, 14}}, anchorBottomLeft,  "SawLvl",       128, 100, NULL,                   NULL          }, // 164 SawLvl
    {moduleTypeOscDual,    paramType1CommonDial,     paramType2Dial,   {{ 65,  -3}, { 7, 14}}, anchorBottomLeft,  "Phase",        128,   0, NULL,                   NULL          }, // 164 Phase
    {moduleTypeOscDual,    paramType1CommonDial,     paramType2Dial,   {{ 90, -17}, { 7, 14}}, anchorBottomLeft,  "ubLvl",        128, 100, NULL,                   NULL          }, // 164 Suboct Lvl
    {moduleTypeOscDual,    paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          },
    {moduleTypeOscDual,    paramType1CommonDial,     paramType2Dial,   {{ 55, -17}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 100, NULL,                   NULL          }, // 164 Sqr M
    {moduleTypeOscDual,    paramType1CommonDial,     paramType2Dial,   {{ 55,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 100, NULL,                   NULL          }, // 164 Saw M
    {moduleTypeOscDual,    paramType1StandardToggle, paramType2Toggle, {{ -3, -10}, { 7,  7}}, anchorBottomRight, "Soft",           2,   0, offOnStrMap,            NULL          }, // 164 Tune M
    // 165 DXRouter
    {moduleTypeDXRouter,   paramType1StandardToggle, paramType2Toggle, {{ 10, -10}, { 7,  7}}, anchorBottomLeft,  "Feedback",       8,   0, dxFeedbackStrMap,       NULL          }, // 165 Feedback
    {moduleTypeDXRouter,   paramType1StandardToggle, paramType2Toggle, {{ 10, -20}, { 7,  7}}, anchorBottomLeft,  "Algorithm",     32,   0, dxAlgStrMap,            NULL          }, // 165 Algorithm
    // 166 Unknown
    // 167 PShift
    {moduleTypePShift,     paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  "Semi",         128,  64, NULL,                   NULL          }, // 167 Semi
    {moduleTypePShift,     paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "Fine",         128,  64, NULL,                   NULL          }, // 167 Fine
    {moduleTypePShift,     paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 167 Shift M
    {moduleTypePShift,     paramType1StandardToggle, paramType2Toggle, {{ 75, -10}, { 7,  7}}, anchorBottomLeft,  "Delay",          5,   0, pShiftDelayStrMod,      NULL          }, // 167 Delay *** CHeck param vals
    {moduleTypePShift,     paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 167 On/Off
    // 168 Unknown
    // 169 ModAHD
    {moduleTypeModAHD,     paramType1ADRTime,        paramType2Dial,   {{ 20, -17}, { 7, 14}}, anchorBottomLeft,  "Attack",       128,   0, NULL,                   NULL          }, // 46 Attack
    {moduleTypeModAHD,     paramType1ADRTime,        paramType2Dial,   {{ 40, -17}, { 7, 14}}, anchorBottomLeft,  "Hold",         128,   0, NULL,                   NULL          }, // 46 Hold
    {moduleTypeModAHD,     paramType1ADRTime,        paramType2Dial,   {{ 60, -17}, { 7, 14}}, anchorBottomLeft,  "Decay",        128,   0, NULL,                   NULL          }, // 46 Decay
    {moduleTypeModAHD,     paramType1CommonDial,     paramType2Dial,   {{ 27,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 167 Attack M
    {moduleTypeModAHD,     paramType1CommonDial,     paramType2Dial,   {{ 47,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 167 Hold M
    {moduleTypeModAHD,     paramType1CommonDial,     paramType2Dial,   {{ 67,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 167 Attack M
    {moduleTypeModAHD,     paramType1StandardToggle, paramType2Toggle, {{-20, -10}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          },
    {moduleTypeModAHD,     paramType1StandardToggle, paramType2Toggle, {{  3, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, kbStrMap,               offOnColourMap},
    // 170 2-In
    {moduleType2toIn,      paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, twoToInSourceStrMap,    NULL          },
    {moduleType2toIn,      paramType1Bypass,         paramType2Toggle, {{-24,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 167 On/Off
    {moduleType2toIn,      paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, db12PadStrMap,          NULL          },
    // 171 4-In
    {moduleType4toIn,      paramType1StandardToggle, paramType2Toggle, {{ 30,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, fourToInSourceStrMap,   NULL          }, // 171 source
    {moduleType4toIn,      paramType1Bypass,         paramType2Toggle, {{-45,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 171 On/Off
    {moduleType4toIn,      paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   1, db12PadStrMap,          NULL          }, // 171 pad
    // 172 DlySingleA
    {moduleTypeDlySingleA, paramType1Time,           paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  "Time",         128,   0, NULL,                   NULL          }, // 158 Time
    // 173 DlySingleB
    {moduleTypeDlySingleB, paramType1Time,           paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  "Time",         128,   0, NULL,                   NULL          }, // 158 Time
    {moduleTypeDlySingleB, paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 173 Time M
    // 174 DelayDual
    {moduleTypeDelayDual,  paramType1Time,           paramType2Dial,   {{ 53, -10}, { 7, 14}}, anchorBottomLeft,  "Time1",        128,   0, NULL,                   NULL          }, // 174 Time
    {moduleTypeDelayDual,  paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 174 Time M
    {moduleTypeDelayDual,  paramType1Time,           paramType2Dial,   {{ 88, -10}, { 7, 14}}, anchorBottomLeft,  "Time2",        128,   0, NULL,                   NULL          }, // 174 Time2
    {moduleTypeDelayDual,  paramType1CommonDial,     paramType2Dial,   {{ 75,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 174 Time M
    // 175 DelayQuad
    {moduleTypeDelayQuad,  paramType1TimeClk,        paramType2Dial,   {{  3, -10}, { 7, 14}}, anchorBottomLeft,  "Time1",        128,   0, NULL,                   NULL          }, // 175 Time1
    {moduleTypeDelayQuad,  paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 175 Time1 M
    {moduleTypeDelayQuad,  paramType1TimeClk,        paramType2Dial,   {{ 23, -10}, { 7, 14}}, anchorBottomLeft,  "Time2",        128,   0, NULL,                   NULL          }, // 175 Time2
    {moduleTypeDelayQuad,  paramType1CommonDial,     paramType2Dial,   {{ 30,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 175 Time2 M
    {moduleTypeDelayQuad,  paramType1TimeClk,        paramType2Dial,   {{ 43, -10}, { 7, 14}}, anchorBottomLeft,  "Time3",        128,   0, NULL,                   NULL          }, // 175 Time3
    {moduleTypeDelayQuad,  paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 175 Time3 M
    {moduleTypeDelayQuad,  paramType1TimeClk,        paramType2Dial,   {{ 63, -10}, { 7, 14}}, anchorBottomLeft,  "Time4",        128,   0, NULL,                   NULL          }, // 175 Time4
    {moduleTypeDelayQuad,  paramType1CommonDial,     paramType2Dial,   {{ 70,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 175 Time4 M
    {moduleTypeDelayQuad,  paramType1StandardToggle, paramType2Toggle, {{ 80, -10}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, timeClkStrMap,          NULL          }, // 175 Time/Clk
    // 176 DelayA
    {moduleTypeDelayA,     paramType1TimeClk,        paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Time",         128,   0, NULL,                   NULL          }, // 176 Time
    {moduleTypeDelayA,     paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  "FB",           128,   0, NULL,                   NULL          }, // 176 FB
    {moduleTypeDelayA,     paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "Filter",       128,  64, NULL,                   NULL          }, // 176 Filter
    {moduleTypeDelayA,     paramType1CommonDial,     paramType2Dial,   {{ 75,  -3}, { 7, 14}}, anchorBottomLeft,  "Dry/Wet",      128,  64, NULL,                   NULL          }, // 176 Filter
    {moduleTypeDelayA,     paramType1StandardToggle, paramType2Toggle, {{ 30,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, timeClkStrMap,          NULL          }, // 176 Time/Clk
    {moduleTypeDelayA,     paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 176 On/Off
    // 177 DelayB
    {moduleTypeDelayB,     paramType1TimeClk,        paramType2Dial,   {{ 40, -10}, { 7, 14}}, anchorBottomLeft,  "Time",         128,   0, NULL,                   NULL          }, // 176 Time
    {moduleTypeDelayB,     paramType1CommonDial,     paramType2Dial,   {{ 50, -17}, { 7, 14}}, anchorBottomLeft,  "FB",           128,   0, NULL,                   NULL          }, // 176 FB
    {moduleTypeDelayB,     paramType1Freq,           paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "LP",           128,  64, NULL,                   NULL          }, // 176 Filter
    {moduleTypeDelayB,     paramType1CommonDial,     paramType2Dial,   {{ 75, -17}, { 7, 14}}, anchorBottomLeft,  "Dry/Wet",      128,  64, NULL,                   NULL          }, // 176 Filter
    {moduleTypeDelayB,     paramType1StandardToggle, paramType2Toggle, {{ 30,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, timeClkStrMap,          NULL          }, // 176 Time/Clk
    {moduleTypeDelayB,     paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 176 FBmod
    {moduleTypeDelayB,     paramType1CommonDial,     paramType2Dial,   {{ 75,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 176 DryWet mod
    {moduleTypeDelayB,     paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 176 On/Off
    {moduleTypeDelayB,     paramType1Freq,           paramType2Dial,   {{ 60, -17}, { 7, 14}}, anchorBottomLeft,  "HP",           128,  64, NULL,                   NULL          }, // 176 Filter
    // 178 DlyClock
    {moduleTypeDlyClock,   paramType1Int,            paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Sample delay", 128,   0, NULL,                   NULL          }, // 176 Time
    // 179 DlyShiftReg
    // 180 Operator
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 20, -60}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 180 Kbt
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 30, -60}, { 7,  7}}, anchorBottomLeft,  "Sync",           2,   0, offOnStrMap,            NULL          }, // 180 Sync *** Check values
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 40, -60}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, ratioFixedStrMap,       NULL          }, // 180 RatioFixes
    {moduleTypeOperator,   paramType1Freq,           paramType2Dial,   {{ 60, -60}, { 7, 14}}, anchorBottomLeft,  "Coarse",       128,   0, NULL,                   NULL          }, // 180 Freq
    {moduleTypeOperator,   paramType1CommonDial,     paramType2Dial,   {{ 50, -60}, { 7, 14}}, anchorBottomLeft,  "Fine",         128,   0, NULL,                   NULL          }, // 180 Freq
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 70, -60}, { 7,  7}}, anchorBottomLeft,  "Detune",        15,   7, detuneStrMap,           NULL          }, // 180 FreqDetune
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 70, -50}, { 7,  7}}, anchorBottomLeft,  "Vel",            8,   0, operator07StrMap,       NULL          }, // 180 Vel
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 83, -50}, { 7,  7}}, anchorBottomLeft,  "RateScale",      8,   0, operator07StrMap,       NULL          }, // 180 RateScale
    {moduleTypeOperator,   paramType1CommonDial,     paramType2Dial,   {{ 20, -30}, { 7, 14}}, anchorBottomLeft,  "R1",           128, 127, NULL,                   NULL          }, // 180 R1
    {moduleTypeOperator,   paramType1CommonDial,     paramType2Dial,   {{ 30, -30}, { 7, 14}}, anchorBottomLeft,  "L1",           128, 127, NULL,                   NULL          }, // 180 L1
    {moduleTypeOperator,   paramType1CommonDial,     paramType2Dial,   {{ 40, -30}, { 7, 14}}, anchorBottomLeft,  "R2",           128, 127, NULL,                   NULL          }, // 180 R2
    {moduleTypeOperator,   paramType1CommonDial,     paramType2Dial,   {{ 50, -30}, { 7, 14}}, anchorBottomLeft,  "L2",           128, 127, NULL,                   NULL          }, // 180 L2
    {moduleTypeOperator,   paramType1CommonDial,     paramType2Dial,   {{ 60, -30}, { 7, 14}}, anchorBottomLeft,  "R3",           128, 127, NULL,                   NULL          }, // 180 R3
    {moduleTypeOperator,   paramType1CommonDial,     paramType2Dial,   {{ 70, -30}, { 7, 14}}, anchorBottomLeft,  "L3",           128, 127, NULL,                   NULL          }, // 180 L3
    {moduleTypeOperator,   paramType1CommonDial,     paramType2Dial,   {{ 80, -30}, { 7, 14}}, anchorBottomLeft,  "R4",           128, 127, NULL,                   NULL          }, // 180 R4
    {moduleTypeOperator,   paramType1CommonDial,     paramType2Dial,   {{ 90, -30}, { 7, 14}}, anchorBottomLeft,  "L4",           128, 127, NULL,                   NULL          }, // 180 L4
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 17, -20}, { 7,  7}}, anchorBottomLeft,  "AMod",           8,   0, operator07StrMap,       NULL          }, // 180 AMod
    {moduleTypeOperator,   paramType1NoteDial,       paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "BrPt",         128,  64, NULL,                   NULL          }, // 180 AMod
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 35,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, operatorDepthStrMap,    NULL          }, // 180 LDepth Mode
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 45,  -3}, { 7,  7}}, anchorBottomLeft,  "Ldepth",         8,   0, operator07StrMap,       NULL          }, // 180 LDepth
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, operatorDepthStrMap,    NULL          }, // 180 RDepth Mode
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 70,  -3}, { 7,  7}}, anchorBottomLeft,  "Rdepth",         8,   0, operator07StrMap,       NULL          }, // 180 RDepth
    {moduleTypeOperator,   paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "Level",        128, 127, NULL,                   NULL          }, // 180 Level
    {moduleTypeOperator,   paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 180 On/Off
    {moduleTypeOperator,   paramType1StandardToggle, paramType2Toggle, {{ 20, -50}, { 7,  7}}, anchorBottomLeft,  "KBEnv",          2,   1, offOnStrMap,            offOnColourMap}, // 180 EnvLB
    // 181 DlyEight
    {moduleTypeDlyEight,   paramType1Time,           paramType2Dial,   {{ 40, -10}, { 7, 14}}, anchorBottomLeft,  "Time",         128,   0, NULL,                   NULL          }, // 181 Time
    // 182 DlyStereo
    {moduleTypeDlyStereo,  paramType1TimeClk,        paramType2Dial,   {{ 30, -17}, { 7, 14}}, anchorBottomLeft,  "Left",         128,   0, NULL,                   NULL          }, // 182 Time Left
    {moduleTypeDlyStereo,  paramType1TimeClk,        paramType2Dial,   {{ 30,  -3}, { 7, 14}}, anchorBottomLeft,  "Right",        128,   0, NULL,                   NULL          }, // 182 Time Right
    {moduleTypeDlyStereo,  paramType1CommonDial,     paramType2Dial,   {{ 40, -17}, { 7, 14}}, anchorBottomLeft,  "FB",           128, 127, NULL,                   NULL          }, // 182 FB L
    {moduleTypeDlyStereo,  paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128, 127, NULL,                   NULL          }, // 182 FB R
    {moduleTypeDlyStereo,  paramType1CommonDial,     paramType2Dial,   {{ 50, -17}, { 7, 14}}, anchorBottomLeft,  "X-FB",         128, 127, NULL,                   NULL          }, // 182 X-FB L
    {moduleTypeDlyStereo,  paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  "X-FB",         128, 127, NULL,                   NULL          }, // 180 X-FB R
    {moduleTypeDlyStereo,  paramType1StandardToggle, paramType2Toggle, {{ 20, -24}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, timeClkStrMap,          NULL          }, // 182 Time/Clk
    {moduleTypeDlyStereo,  paramType1Freq,           paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "LP",           128, 127, NULL,                   NULL          }, // 182 LP
    {moduleTypeDlyStereo,  paramType1CommonDial,     paramType2Dial,   {{ 80, -17}, { 7, 14}}, anchorBottomLeft,  "Dry/Wet",      128,  64, NULL,                   NULL          }, // 182 Dry/Wet
    {moduleTypeDlyStereo,  paramType1Bypass,         paramType2Toggle, {{ -3, -17}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 182 On/Off
    {moduleTypeDlyStereo,  paramType1Freq,           paramType2Dial,   {{ 70,  -3}, { 7, 14}}, anchorBottomLeft,  "HP",           128, 127, NULL,                   NULL          }, // 180 HP
    // 183 OscPM
    {moduleTypeOscPM,      paramType1CommonDial,     paramType2Dial,   {{ 32,  -3}, { 7, 14}}, anchorBottomLeft,  "Tune",         128,  64, NULL,                   NULL          }, // 9 Coarse
    {moduleTypeOscPM,      paramType1CommonDial,     paramType2Dial,   {{ 45,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 9 Fine
    {moduleTypeOscPM,      paramType1StandardToggle, paramType2Toggle, {{ 22, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 9 Kbt
    {moduleTypeOscPM,      paramType1StandardToggle, paramType2Toggle, {{ 30,  10}, { 7,  7}}, anchorTopLeft,     NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 9 Tune Mode
    {moduleTypeOscPM,      paramType1CommonDial,     paramType2Dial,   {{ 62,  -3}, { 7, 14}}, anchorBottomLeft,  "PhM",          128,   0, NULL,                   NULL          }, // FM
    {moduleTypeOscPM,      paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 9 Bypass
    {moduleTypeOscPM,      paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // Pitch Mode
    // 184 Mix1-1A
    {moduleTypeMix1to1A,   paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 184 Level
    {moduleTypeMix1to1A,   paramType1Enable,         paramType2Toggle, {{ 40,  -3}, {14,  4}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 184 Enable1
    {moduleTypeMix1to1A,   paramType1StandardToggle, paramType2Toggle, {{ 30, -25}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, expStrMap,              NULL          }, // 184 Exp
    // 185 Mix1-1S
    {moduleTypeMix1to1S,   paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 184 Level
    {moduleTypeMix1to1S,   paramType1Enable,         paramType2Toggle, {{ 40,  -3}, {14,  4}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 184 Enable1
    {moduleTypeMix1to1S,   paramType1StandardToggle, paramType2Toggle, {{ 30, -25}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, expStrMap,              NULL          }, // 184 Exp
    // 186 Sw1-2M
    {moduleTypeSw1to2M,    paramType1StandardToggle, paramType2Toggle, {{ 37,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, out8StrMap,             NULL          }, // 186 Selector *** Needs new UI element
    // 187 Sw2-1M
    {moduleTypeSw2to1M,    paramType1StandardToggle, paramType2Toggle, {{ 37,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, out8StrMap,             NULL          }, // 187 Selector *** Needs new UI element
    // 188 ConstSwM
    {moduleTypeConstSwM,   paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 188 Level
    {moduleTypeConstSwM,   paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, offOnStrMap,            NULL          }, // 188 Selector *** needs new UI element
    {moduleTypeConstSwM,   paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, bipUniStrMap,           NULL          }, // 188 Bip/Uni
    // 189 NoiseGate
    {moduleTypeNoiseGate,  paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "Threshold",    128,  64, NULL,                   NULL          }, // 188 Level
    {moduleTypeNoiseGate,  paramType1ADRTime,        paramType2Dial,   {{ 20,  -3}, { 7, 14}}, anchorBottomLeft,  "Attack",       128,   0, NULL,                   NULL          }, // 189 Attack
    {moduleTypeNoiseGate,  paramType1ADRTime,        paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Release",      128,   0, NULL,                   NULL          }, // 189 Release
    {moduleTypeNoiseGate,  paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 9 Bypass
    // 190 LfoB
    {moduleTypeLfoB,       paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 26 Rate  *** Could have Freq but tied to Range
    {moduleTypeLfoB,       paramType1CommonDial,     paramType2Dial,   {{ 30,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 26 Rate M
    {moduleTypeLfoB,       paramType1StandardToggle, paramType2Toggle, {{ 40, -20}, { 7,  7}}, anchorBottomLeft,  NULL,             5,   0, rangeStrMap,            NULL          }, // 26 Range
    {moduleTypeLfoB,       paramType1StandardToggle, paramType2Toggle, {{ 50, -13}, { 7,  7}}, anchorBottomLeft,  "Kbt",            5,   0, offTo100KbStrMap,       NULL          }, // 26 Kbt
    {moduleTypeLfoB,       paramType1StandardToggle, paramType2Toggle, {{ 60, -20}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, lfoWaveStrMap,          NULL          }, // 26 Wave
    {moduleTypeLfoB,       paramType1StandardToggle, paramType2Toggle, {{ 30, -20}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, polyMonoStrMap,         NULL          }, // 26 Mode
    {moduleTypeLfoB,       paramType1CommonDial,     paramType2Dial,   {{ 77,  -3}, { 7, 14}}, anchorBottomLeft,  "Phase",        128,  64, NULL,                   NULL          }, // 26 Phase
    {moduleTypeLfoB,       paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 26 Bypass
    {moduleTypeLfoB,       paramType1StandardToggle, paramType2Toggle, {{-17, -17}, { 7,  7}}, anchorBottomRight, NULL,             6,   0, posStrMap,              NULL          }, // 26 OutType
    {moduleTypeLfoB,       paramType1CommonDial,     paramType2Dial,   {{ 67,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 26 Phase M
    // 191 Unknown
    // 192 Phaser
    {moduleTypePhaser,     paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, phaserTypeStrMap,       NULL          }, // 192 Type
    {moduleTypePhaser,     paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Rate",         128,  64, NULL,                   NULL          }, // 192 Rate *** UI
    {moduleTypePhaser,     paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "FB",           128,   0, NULL,                   NULL          }, // 192 FB
    {moduleTypePhaser,     paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 192 Bypass
    // 193 Mix4-1A -- no params
    // 194 Mix2-1A
    {moduleTypeMix2to1A,   paramType1CommonDial,     paramType2Dial,   {{ 57,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 123 L1
    {moduleTypeMix2to1A,   paramType1Enable,         paramType2Toggle, {{ 37,  -3}, { 5,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 123 Enable1
    {moduleTypeMix2to1A,   paramType1CommonDial,     paramType2Dial,   {{ 82,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,   0, NULL,                   NULL          }, // 123 L2
    {moduleTypeMix2to1A,   paramType1Enable,         paramType2Toggle, {{ 67,  -3}, { 5,  3}}, anchorBottomLeft,  NULL,             2,   0, NULL,                   offOnColourMap}, // 123 Enable2
    {moduleTypeMix2to1A,   paramType1StandardToggle, paramType2Toggle, {{ 20,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, expStrMap,              NULL          }, // 123 Exp
    // 195 ModAmt
    {moduleTypeModAmt,     paramType1CommonDial,     paramType2Dial,   {{ 40,  -3}, { 7, 14}}, anchorBottomLeft,  "Depth",        128,   0, NULL,                   NULL          }, // 195 Depth
    {moduleTypeModAmt,     paramType1StandardToggle, paramType2Toggle, {{ 60,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   1, offOnStrMap,            offOnColourMap}, // 195 Enable
    {moduleTypeModAmt,     paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, expStrMap,              NULL          }, // 195 Exp
    {moduleTypeModAmt,     paramType1StandardToggle, paramType2Toggle, {{ 20,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, invertStrMap,           NULL          }, // 195 m/1-m
    // 196 OscPerc
    {moduleTypeOscPerc,    paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  "Tune",         128,  64, NULL,                   NULL          }, // 196 Coarse
    {moduleTypeOscPerc,    paramType1CommonDial,     paramType2Dial,   {{ 60,  -3}, { 7, 14}}, anchorBottomLeft,  "Cent",         128,  64, NULL,                   NULL          }, // 196 Fine
    {moduleTypeOscPerc,    paramType1StandardToggle, paramType2Toggle, {{ 50, -17}, { 7,  7}}, anchorBottomLeft,  NULL,             4,   0, pitchTypeStrMap,        NULL          }, // 196 Tune Mode
    {moduleTypeOscPerc,    paramType1StandardToggle, paramType2Toggle, {{ 40, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 196  Kbt
    {moduleTypeOscPerc,    paramType1CommonDial,     paramType2Dial,   {{ 12,  -3}, { 7, 14}}, anchorBottomLeft,  "Pitch",        128,   0, NULL,                   NULL          }, // 196 Pitch M
    {moduleTypeOscPerc,    paramType1ADRTime,        paramType2Dial,   {{ 70,  -3}, { 7, 14}}, anchorBottomLeft,  "Decay",        128,  64, NULL,                   NULL          }, // 196 Decay
    {moduleTypeOscPerc,    paramType1CommonDial,     paramType2Dial,   {{ 80,  -3}, { 7, 14}}, anchorBottomLeft,  "Click",        128,  64, NULL,                   NULL          }, // 196 Click
    {moduleTypeOscPerc,    paramType1StandardToggle, paramType2Toggle, {{ 90, -10}, { 7,  7}}, anchorBottomLeft,  "Punch",          2,   1, offOnStrMap,            offOnColourMap}, // 196 Punch
    {moduleTypeOscPerc,    paramType1Bypass,         paramType2Toggle, {{-10,  -3}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 196 Bypass
    // 197 Status -- No params
    // 198 PitchTrack
    {moduleTypePitchTrack, paramType1CommonDial,     paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  "Threshold",    128,  64, NULL,                   NULL          }, // 198 Threshold
    // 199 MonoKey
    {moduleTypeMonoKey,    paramType1StandardToggle, paramType2Toggle, {{ 30,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             3,   0, monoKeyStrMap,          NULL          }, // 199 Priority
    // 200 RandomA
    {moduleTypeRandomA,    paramType1Freq,           paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 200 Rate
    {moduleTypeRandomA,    paramType1StandardToggle, paramType2Toggle, {{ 30,   0}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, polyMonoStrMap,         NULL          }, // 200 Poly/Mono mode
    {moduleTypeRandomA,    paramType1StandardToggle, paramType2Toggle, {{ 80,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             6,   0, posStrMap,              NULL          }, // 200 OutType
    {moduleTypeRandomA,    paramType1StandardToggle, paramType2Toggle, {{ 30,  -9}, { 7,  7}}, anchorBottomLeft,  NULL,             5,   0, rangeStrMap,            NULL          }, // 200 Range
    {moduleTypeRandomA,    paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 26 Bypass
    {moduleTypeRandomA,    paramType1StandardToggle, paramType2Toggle, {{ 65,  -2}, { 7,  7}}, anchorBottomLeft,  "Edge",           5,   0, edgeStepStrMap,         NULL          }, // 200 edge
    {moduleTypeRandomA,    paramType1StandardToggle, paramType2Toggle, {{ 65, -10}, { 7,  7}}, anchorBottomLeft,  "Step",           5,   0, edgeStepStrMap,         NULL          }, // 200 step
    // 201 Red2Blue
    // 202 RandomB
    {moduleTypeRandomB,    paramType1Freq,           paramType2Dial,   {{ 50,  -3}, { 7, 14}}, anchorBottomLeft,  NULL,           128,  64, NULL,                   NULL          }, // 202 Rate
    {moduleTypeRandomB,    paramType1StandardToggle, paramType2Toggle, {{ 30,   0}, { 7,  7}}, anchorBottomLeft,  NULL,             2,   0, polyMonoStrMap,         NULL          }, // 202 Poly/Mono mode
    {moduleTypeRandomB,    paramType1StandardToggle, paramType2Toggle, {{ 40, -10}, { 7,  7}}, anchorBottomLeft,  "Kbt",            2,   1, offOnStrMap,            offOnColourMap}, // 202  Kbt
    {moduleTypeRandomB,    paramType1CommonDial,     paramType2Dial,   {{ 10,  -3}, { 7, 14}}, anchorBottomLeft,  "Rate",         128,  64, NULL,                   NULL          }, // 202 Rate M
    {moduleTypeRandomB,    paramType1CommonDial,     paramType2Dial,   {{ 65, -10}, { 7, 14}}, anchorBottomLeft,  "Step",         128,  64, NULL,                   NULL          }, // 202 Rate M
    {moduleTypeRandomB,    paramType1Bypass,         paramType2Toggle, {{ -3, -10}, { 5,  5}}, anchorBottomRight, "Bypass",         2,   0, NULL,                   NULL          }, // 202 Bypass
    {moduleTypeRandomB,    paramType1StandardToggle, paramType2Toggle, {{ 80,  -3}, { 7,  7}}, anchorBottomLeft,  NULL,             6,   0, posStrMap,              NULL          }, // 202 OutType
    {moduleTypeRandomB,    paramType1StandardToggle, paramType2Toggle, {{ 20, -14}, { 7,  7}}, anchorBottomLeft,  NULL,             5,   0, rangeStrMap,            NULL          }, // 202 Range
    {moduleTypeRandomB,    paramType1StandardToggle, paramType2Toggle, {{ 65,  -2}, { 7,  7}}, anchorBottomLeft,  "Edge",           5,   0, edgeStepStrMap,         NULL          }, // 202 edge
    // 203 Blue2Red
    // 204 RndClkA
    // 205 RndTrig
    // 206 RndClkB
    // 207 Unknown
    // 208 RndPattern
};

// Note these need to be in same order of connectors which are referenced by the hardware
const tConnectorLocation connectorLocationList[] = {
    //  0 Unknown
    //  1 Keyboard
    {moduleTypeKeyboard,    connectorDirOut, connectorTypeControl, {{ 10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Pitch",        labelLocLeft }, // 1
    {moduleTypeKeyboard,    connectorDirOut, connectorTypeLogic,   {{ 40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Gate",         labelLocLeft },
    {moduleTypeKeyboard,    connectorDirOut, connectorTypeControl, {{ 53,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Lin",          labelLocLeft },
    {moduleTypeKeyboard,    connectorDirOut, connectorTypeControl, {{ 93,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rel",          labelLocLeft },
    {moduleTypeKeyboard,    connectorDirOut, connectorTypeControl, {{ 25,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Note",         labelLocLeft },
    {moduleTypeKeyboard,    connectorDirOut, connectorTypeControl, {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Exp",          labelLocLeft },
    // 2 Unknown
    // 3 4-Out
    {moduleType4toOut,      connectorDirIn,  connectorTypeAudio,   {{-24,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    "1",            labelLocUp   }, // 3 4-out
    {moduleType4toOut,      connectorDirIn,  connectorTypeAudio,   {{-17,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    "2",            labelLocUp   },
    {moduleType4toOut,      connectorDirIn,  connectorTypeAudio,   {{-10,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    "3",            labelLocUp   },
    {moduleType4toOut,      connectorDirIn,  connectorTypeAudio,   {{ -3,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    "4",            labelLocUp   },
    //  4 2-Out
    {moduleType2toOut,      connectorDirIn,  connectorTypeAudio,   {{-10,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 4
    {moduleType2toOut,      connectorDirIn,  connectorTypeAudio,   {{ -3,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   },
    //  5 Invert
    {moduleTypeInvert,      connectorDirIn,  connectorTypeLogic,   {{-48,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocLeft }, // 5 In 1
    {moduleTypeInvert,      connectorDirOut, connectorTypeLogic,   {{-33,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocLeft }, // 5 Out 1
    {moduleTypeInvert,      connectorDirIn,  connectorTypeLogic,   {{-18,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocLeft }, // 5 In 2
    {moduleTypeInvert,      connectorDirOut, connectorTypeLogic,   {{ -3,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocLeft }, // 5 Out 2
    //  6 Unknown
    //  7 OscB
    {moduleTypeOscB,        connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 7 OscB Pitch
    {moduleTypeOscB,        connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // PitchVar
    {moduleTypeOscB,        connectorDirIn,  connectorTypeAudio,   {{  3, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Sync",         labelLocRight}, // Sync
    {moduleTypeOscB,        connectorDirIn,  connectorTypeAudio,   {{ 55,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // FmMod
    {moduleTypeOscB,        connectorDirIn,  connectorTypeAudio,   {{ 73,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // Shape Mod
    {moduleTypeOscB,        connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // Out
    //  8 OscShpB
    {moduleTypeOscShpB,     connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 8 OscShpB
    //{moduleTypeOscShpB,    connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,    labelLocUp   }, // 8
    {moduleTypeOscShpB,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   },
    {moduleTypeOscShpB,     connectorDirIn,  connectorTypeAudio,   {{  3, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   },
    {moduleTypeOscShpB,     connectorDirIn,  connectorTypeAudio,   {{ 55,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   },
    {moduleTypeOscShpB,     connectorDirIn,  connectorTypeAudio,   {{ 73,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   },
    {moduleTypeOscShpB,     connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },
    //  9 OscC
    {moduleTypeOscC,        connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 9 OscC PitchVar
    {moduleTypeOscC,        connectorDirIn,  connectorTypeAudio,   {{  3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Sync",         labelLocRight}, // Sync
    {moduleTypeOscC,        connectorDirIn,  connectorTypeAudio,   {{ 55,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // FmMod
    {moduleTypeOscC,        connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // Pitch
    {moduleTypeOscC,        connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // Out
    // 10 Unknown
    // 11 Unknown
    // 12 Reverb
    {moduleTypeReverb,      connectorDirIn,  connectorTypeAudio,   {{-12,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    "L",            labelLocLeft }, // 12 Reberb InL
    {moduleTypeReverb,      connectorDirIn,  connectorTypeAudio,   {{ -3,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    "R",            labelLocLeft }, // 12 Reberb InR
    {moduleTypeReverb,      connectorDirOut, connectorTypeAudio,   {{-12,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 12 Reberb OutL
    {moduleTypeReverb,      connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 12 Reberb InL
    // 13 OscString
    {moduleTypeOscString,   connectorDirIn,  connectorTypeAudio,   {{ -3,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocLeft }, // 13 OscString Audio In
    {moduleTypeOscString,   connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 13 OscString Pitch
    {moduleTypeOscString,   connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 13 OscString Pitch Var
    {moduleTypeOscString,   connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 13 OscString Audio Out
    // 14 Unknown
    // 15 Sw8-1
    {moduleTypeSw8to1,      connectorDirIn,  connectorTypeControl, {{ 30, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocLeft }, // 15 In 1
    {moduleTypeSw8to1,      connectorDirIn,  connectorTypeControl, {{ 35, -15}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocLeft }, // 15 In 2
    {moduleTypeSw8to1,      connectorDirIn,  connectorTypeControl, {{ 45, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocLeft }, // 15 In 3
    {moduleTypeSw8to1,      connectorDirIn,  connectorTypeControl, {{ 50, -15}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocLeft }, // 15 In 4
    {moduleTypeSw8to1,      connectorDirIn,  connectorTypeControl, {{ 60, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "5",            labelLocLeft }, // 15 In 5
    {moduleTypeSw8to1,      connectorDirIn,  connectorTypeControl, {{ 65, -15}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "6",            labelLocLeft }, // 15 In 6
    {moduleTypeSw8to1,      connectorDirIn,  connectorTypeControl, {{ 75, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "7",            labelLocLeft }, // 15 In 7
    {moduleTypeSw8to1,      connectorDirIn,  connectorTypeControl, {{ 80, -15}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "8",            labelLocLeft }, // 15 In 8
    {moduleTypeSw8to1,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 13 Out
    {moduleTypeSw8to1,      connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Control",      labelLocUp   }, // 13 Control
    // 16 Unknown
    // 17 ValSw1-2
    {moduleTypeValSw1to2,   connectorDirIn,  connectorTypeControl, {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 17 In
    {moduleTypeValSw1to2,   connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 17 Ctrl
    {moduleTypeValSw1to2,   connectorDirOut, connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 17 Out1
    {moduleTypeValSw1to2,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 17 Out2
    // 18 X-Fade
    {moduleTypeXtoFade,     connectorDirIn,  connectorTypeControl, {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocLeft }, // 18 In1
    {moduleTypeXtoFade,     connectorDirIn,  connectorTypeControl, {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocLeft }, // 18 In2
    {moduleTypeXtoFade,     connectorDirIn,  connectorTypeControl, {{ 33,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 18 Mod
    {moduleTypeXtoFade,     connectorDirOut, connectorTypeControl, {{ 92,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 18 Out
    // 19 Mix4-1B
    {moduleTypeMix4to1B,    connectorDirIn,  connectorTypeControl, {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 19 In 1
    {moduleTypeMix4to1B,    connectorDirIn,  connectorTypeControl, {{ 45,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocUp   }, // 19 In 2
    {moduleTypeMix4to1B,    connectorDirIn,  connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocUp   }, // 19 In 3
    {moduleTypeMix4to1B,    connectorDirIn,  connectorTypeControl, {{ 75,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocUp   }, // 19 In 4
    {moduleTypeMix4to1B,    connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Chain",        labelLocRight}, // 19 Chain
    {moduleTypeMix4to1B,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 19 Out
    // 20 EnvADSR
    {moduleTypeEnvADSR,     connectorDirIn,  connectorTypeControl, {{ -3,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 20
    {moduleTypeEnvADSR,     connectorDirIn,  connectorTypeLogic,   {{  3,  15}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     "Gate",         labelLocRight},
    {moduleTypeEnvADSR,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "AM",           labelLocRight},
    {moduleTypeEnvADSR,     connectorDirOut, connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Env",          labelLocUp   },
    {moduleTypeEnvADSR,     connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },
    // 21 Mux1-8
    {moduleTypeMux1to8,     connectorDirIn,  connectorTypeControl, {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 21 In
    {moduleTypeMux1to8,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 21 Ctrl
    {moduleTypeMux1to8,     connectorDirOut, connectorTypeControl, {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 21 Out1
    {moduleTypeMux1to8,     connectorDirOut, connectorTypeControl, {{ 38,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocUp   }, // 21 Out2
    {moduleTypeMux1to8,     connectorDirOut, connectorTypeControl, {{ 46,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocUp   }, // 21 Out3
    {moduleTypeMux1to8,     connectorDirOut, connectorTypeControl, {{ 54,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocUp   }, // 21 Out4
    {moduleTypeMux1to8,     connectorDirOut, connectorTypeControl, {{ 62,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "5",            labelLocUp   }, // 21 Out5
    {moduleTypeMux1to8,     connectorDirOut, connectorTypeControl, {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "6",            labelLocUp   }, // 21 Out6
    {moduleTypeMux1to8,     connectorDirOut, connectorTypeControl, {{ 78,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "7",            labelLocUp   }, // 21 Out7
    {moduleTypeMux1to8,     connectorDirOut, connectorTypeControl, {{ 86,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "8",            labelLocUp   }, // 21 Out8
    // 22 PartQuant
    {moduleTypePartQuant,   connectorDirIn,  connectorTypeControl, {{ 85,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 22 In
    {moduleTypePartQuant,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 22 Out
    // 23 ModADSR
    {moduleTypeModADSR,     connectorDirIn,  connectorTypeLogic,   {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Gate",         labelLocRight}, // 169 Gate
    {moduleTypeModADSR,     connectorDirIn,  connectorTypeControl, {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 169 Attack M
    {moduleTypeModADSR,     connectorDirIn,  connectorTypeControl, {{ 35,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 169 Decay M
    {moduleTypeModADSR,     connectorDirIn,  connectorTypeControl, {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 169 Sustain M
    {moduleTypeModADSR,     connectorDirIn,  connectorTypeControl, {{ 65,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 169 Release M
    {moduleTypeModADSR,     connectorDirIn,  connectorTypeControl, {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 169 In
    {moduleTypeModADSR,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "AM",           labelLocRight}, // 169 AM
    {moduleTypeModADSR,     connectorDirOut, connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Env",          labelLocUp   }, // 169 Env
    {moduleTypeModADSR,     connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 169 Out
    // 24 LfoC
    {moduleTypeLfoC,        connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rate",         labelLocRight},
    {moduleTypeLfoC,        connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },
    // 25 LfoShpA
    {moduleTypeLfoShpA,     connectorDirIn,  connectorTypeControl, {{ 10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // Rate
    {moduleTypeLfoShpA,     connectorDirIn,  connectorTypeControl, {{ 17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // RateVar
    {moduleTypeLfoShpA,     connectorDirIn,  connectorTypeControl, {{  3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rst",          labelLocUp   }, // Rst
    {moduleTypeLfoShpA,     connectorDirIn,  connectorTypeControl, {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // Shape M
    {moduleTypeLfoShpA,     connectorDirIn,  connectorTypeControl, {{ 67,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // Phase M
    {moduleTypeLfoShpA,     connectorDirIn,  connectorTypeControl, {{ 10, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Dir",          labelLocUp   }, // Dir
    {moduleTypeLfoShpA,     connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // Out
    {moduleTypeLfoShpA,     connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Snc",          labelLocUp   }, // Snc
    // 26 LfoA
    {moduleTypeLfoA,        connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // Rate
    {moduleTypeLfoA,        connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // Rate
    {moduleTypeLfoA,        connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // Out
    // 27 OscMaster
    {moduleTypeOscMaster,   connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 9 OscC Pitch
    {moduleTypeOscMaster,   connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 9 OscC PitchVar
    {moduleTypeOscMaster,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // Out
    // 28 Saturate
    {moduleTypeSaturate,    connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 28 In
    {moduleTypeSaturate,    connectorDirIn,  connectorTypeControl, {{ 35,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 28 Mod
    {moduleTypeSaturate,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 28 Out
    // 29 MetNoise
    {moduleTypeMetNoise,    connectorDirIn,  connectorTypeControl, {{ 32,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 29 FreqMod
    {moduleTypeMetNoise,    connectorDirIn,  connectorTypeControl, {{ 62,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 29 ColorMod
    {moduleTypeMetNoise,    connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 29 Out
    // 30 Device
    {moduleTypeDevice,      connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Wheel",        labelLocUp   }, // 30 Wheel
    {moduleTypeDevice,      connectorDirOut, connectorTypeControl, {{ 18,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "AftTouch",     labelLocUp   }, // 30 AfterTouch
    {moduleTypeDevice,      connectorDirOut, connectorTypeControl, {{ 33,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "CtrlPedal",    labelLocUp   }, // 30 ControlPedal
    {moduleTypeDevice,      connectorDirOut, connectorTypeLogic,   {{ 48,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Sustain",      labelLocUp   }, // 30 SustainPedal
    {moduleTypeDevice,      connectorDirOut, connectorTypeControl, {{ 63,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Stick",        labelLocUp   }, // 30 PitchStick
    {moduleTypeDevice,      connectorDirOut, connectorTypeControl, {{ 78,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "GWh1",         labelLocUp   }, // 30 Global Wheel 1
    {moduleTypeDevice,      connectorDirOut, connectorTypeControl, {{ 88,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "GWh2",         labelLocUp   }, // 30 Global Wheel 2
    // 31 Noise
    {moduleTypeNoise,       connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 31 Out
    // 32 Eq2Band
    {moduleTypeEq2Band,     connectorDirIn,  connectorTypeAudio,   {{ -3, -15}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 32 In
    {moduleTypeEq2Band,     connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 32 Out
    // 33 Eq3Band
    {moduleTypeEq3band,     connectorDirIn,  connectorTypeAudio,   {{ -3, -15}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 33 In
    {moduleTypeEq3band,     connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 33 Out
    // 34 ShpExp
    {moduleTypeShpExp,      connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 34 In
    {moduleTypeShpExp,      connectorDirIn,  connectorTypeControl, {{ 35,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 34 Mod
    {moduleTypeShpExp,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 34 Out
    // 35 Driver
    {moduleTypeDriver,      connectorDirIn,  connectorTypeAudio,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 35 In1
    {moduleTypeDriver,      connectorDirIn,  connectorTypeAudio,   {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 35 In2
    {moduleTypeDriver,      connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 35 Out
    // 36 SwOnOffM
    {moduleTypeSwOnOffM,    connectorDirIn,  connectorTypeControl, {{-20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 36 In
    {moduleTypeSwOnOffM,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 36 Out
    {moduleTypeSwOnOffM,    connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 36 Ctrl
    // 37 Unknown
    // 38 Pulse
    {moduleTypePulse,       connectorDirIn,  connectorTypeLogic,   {{-21,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 38 In
    {moduleTypePulse,       connectorDirIn,  connectorTypeControl, {{ 35,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 38 TimeM
    {moduleTypePulse,       connectorDirOut, connectorTypeLogic,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 38 Out
    // 39 Unknown
    // 40 Mix8-1B
    {moduleTypeMix8to1B,    connectorDirIn,  connectorTypeControl, {{ 21, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 40 In1
    {moduleTypeMix8to1B,    connectorDirIn,  connectorTypeControl, {{ 30, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocUp   }, // 40 In2
    {moduleTypeMix8to1B,    connectorDirIn,  connectorTypeControl, {{ 39, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocUp   }, // 40 In3
    {moduleTypeMix8to1B,    connectorDirIn,  connectorTypeControl, {{ 48, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocUp   }, // 40 In4
    {moduleTypeMix8to1B,    connectorDirIn,  connectorTypeControl, {{ 57, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "5",            labelLocUp   }, // 40 In5
    {moduleTypeMix8to1B,    connectorDirIn,  connectorTypeControl, {{ 66, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "6",            labelLocUp   }, // 40 In6
    {moduleTypeMix8to1B,    connectorDirIn,  connectorTypeControl, {{ 75, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "7",            labelLocUp   }, // 40 In7
    {moduleTypeMix8to1B,    connectorDirIn,  connectorTypeControl, {{ 84, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "8",            labelLocUp   }, // 40 In8
    {moduleTypeMix8to1B,    connectorDirIn,  connectorTypeControl, {{ -3, -28}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Chain",        labelLocLeft }, // 40 Chain
    {moduleTypeMix8to1B,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 40 Out
    // 41 EnvH
    {moduleTypeEnvH,        connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Trig",         labelLocRight}, // 41 Trig
    {moduleTypeEnvH,        connectorDirIn,  connectorTypeControl, {{ 25,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "AM",           labelLocRight},
    {moduleTypeEnvH,        connectorDirIn,  connectorTypeControl, {{-12,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 41 In
    {moduleTypeEnvH,        connectorDirOut, connectorTypeControl, {{-20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Env",          labelLocUp   }, // 41 Env
    {moduleTypeEnvH,        connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 41 Out
    // 42 Delay
    {moduleTypeDelay,       connectorDirIn,  connectorTypeLogic,   {{-21,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 42 In
    {moduleTypeDelay,       connectorDirIn,  connectorTypeControl, {{ 35,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 42 TimeM
    {moduleTypeDelay,       connectorDirOut, connectorTypeLogic,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 42 Out
    // 43 Constant
    {moduleTypeConstant,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 43 Out
    // 44 LevMult
    {moduleTypeLevMult,     connectorDirIn,  connectorTypeControl, {{-30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 44 In
    {moduleTypeLevMult,     connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 44 Mod
    {moduleTypeLevMult,     connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 43 Out
    // 45 FltVoice
    {moduleTypeFltVoice,    connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 45 In
    {moduleTypeFltVoice,    connectorDirIn,  connectorTypeControl, {{ 38,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 45 Vowel
    {moduleTypeFltVoice,    connectorDirIn,  connectorTypeAudio,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 45 FreqMod
    {moduleTypeFltVoice,    connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 45 Out
    // 46 EnvAHD
    {moduleTypeEnvAHD,      connectorDirIn,  connectorTypeLogic,   {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Trig",         labelLocRight}, // 46 Trig
    {moduleTypeEnvAHD,      connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "AM",           labelLocRight}, // 46 AM
    {moduleTypeEnvAHD,      connectorDirIn,  connectorTypeControl, {{ -3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 46 In
    {moduleTypeEnvAHD,      connectorDirOut, connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Env",          labelLocUp   }, // 46 Env
    {moduleTypeEnvAHD,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 46 Out
    // 47 Pan
    {moduleTypePan,         connectorDirIn,  connectorTypeControl, {{-25,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 47 In
    {moduleTypePan,         connectorDirIn,  connectorTypeControl, {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 47 Mod
    {moduleTypePan,         connectorDirOut, connectorTypeControl, {{-15,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "L",            labelLocLeft }, // 47 OutL
    {moduleTypePan,         connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "R",            labelLocLeft }, // 46 OutR
    // 48 MixStereo
    {moduleTypeMixStereo,   connectorDirIn,  connectorTypeControl, {{ 10, -30}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 48 In1
    {moduleTypeMixStereo,   connectorDirIn,  connectorTypeControl, {{ 22, -30}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 48 In2
    {moduleTypeMixStereo,   connectorDirIn,  connectorTypeControl, {{ 34, -30}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 48 In3
    {moduleTypeMixStereo,   connectorDirIn,  connectorTypeControl, {{ 46, -30}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 48 In4
    {moduleTypeMixStereo,   connectorDirIn,  connectorTypeControl, {{ 58, -30}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 48 In5
    {moduleTypeMixStereo,   connectorDirIn,  connectorTypeControl, {{ 70, -30}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 48 In6
    {moduleTypeMixStereo,   connectorDirOut, connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "L",            labelLocUp   }, // 48 OutL
    {moduleTypeMixStereo,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "R",            labelLocUp   }, // 48 OutR
    // 49 FltMulti
    {moduleTypeFltMulti,    connectorDirIn,  connectorTypeAudio,   {{ -3,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 49 In
    {moduleTypeFltMulti,    connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "LP",           labelLocLeft },
    {moduleTypeFltMulti,    connectorDirOut, connectorTypeAudio,   {{ -3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "BP",           labelLocLeft },
    {moduleTypeFltMulti,    connectorDirOut, connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "HP",           labelLocLeft },
    {moduleTypeFltMulti,    connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // PitchVar
    {moduleTypeFltMulti,    connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // Pitch
    // 50 ConstSwT
    {moduleTypeConstSwT,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 50 Out
    // 51 FltNord
    {moduleTypeFltNord,     connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 51 In
    {moduleTypeFltNord,     connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // Out
    {moduleTypeFltNord,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // PitchVar
    {moduleTypeFltNord,     connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // Pitch
    {moduleTypeFltNord,     connectorDirIn,  connectorTypeControl, {{ 25,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // FMLin
    {moduleTypeFltNord,     connectorDirIn,  connectorTypeControl, {{ 47,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // Res
    // 52 EnvMulti
    {moduleTypeEnvMulti,    connectorDirIn,  connectorTypeLogic,   {{  3,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     "Gate",         labelLocRight}, // 52 Gate
    {moduleTypeEnvMulti,    connectorDirIn,  connectorTypeControl, {{ 17,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     "AM",           labelLocRight}, // 52 AM
    {moduleTypeEnvMulti,    connectorDirIn,  connectorTypeControl, {{-10,   7}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocRight}, // 52 In
    {moduleTypeEnvMulti,    connectorDirOut, connectorTypeControl, {{ -3,  14}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    "Env",          labelLocLeft }, // 52 Env
    {moduleTypeEnvMulti,    connectorDirOut, connectorTypeControl, {{ -3,   7}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 52 Out
    // 53 SandH
    {moduleTypeSandH,       connectorDirIn,  connectorTypeControl, {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 53 In
    {moduleTypeSandH,       connectorDirIn,  connectorTypeLogic,   {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocLeft }, // 53 Ctrl
    {moduleTypeSandH,       connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 53 Out
    // 54 FltStatic
    {moduleTypeFltStatic,   connectorDirIn,  connectorTypeAudio,   {{ -3,   7}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 54 In
    {moduleTypeFltStatic,   connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 54 Out
    // 55 EnvD
    {moduleTypeEnvD,        connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Trig",         labelLocRight}, // 55 Trig
    {moduleTypeEnvD,        connectorDirIn,  connectorTypeControl, {{ 17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "AM",           labelLocRight}, // 55 AM
    {moduleTypeEnvD,        connectorDirIn,  connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 55 In
    {moduleTypeEnvD,        connectorDirOut, connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Env",          labelLocLeft }, // 55 Env
    {moduleTypeEnvD,        connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 55 Out
    // 56 Resonator
    {moduleTypeResonator,   connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 56 In1
    {moduleTypeResonator,   connectorDirIn,  connectorTypeControl, {{ 10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 56 In2
    {moduleTypeResonator,   connectorDirIn,  connectorTypeControl, {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 56 In3
    {moduleTypeResonator,   connectorDirOut, connectorTypeControl, {{-10, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 56 Out1
    {moduleTypeResonator,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 56 Out2
    // 57 Automate
    // 58 Drumsynth
    {moduleTypeDrumSynth,   connectorDirIn,  connectorTypeLogic,   {{  3,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     "Trig",         labelLocUp   }, // 55 Trig
    {moduleTypeDrumSynth,   connectorDirIn,  connectorTypeControl, {{  3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Pitch",        labelLocUp   }, // 55 Pitch M
    {moduleTypeDrumSynth,   connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Vel",          labelLocUp   }, // 55 Velocity
    {moduleTypeDrumSynth,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 55 Out
    // 59 CompLev
    {moduleTypeCompLev,     connectorDirIn,  connectorTypeControl, {{ 40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "A",            labelLocLeft }, // 55 Pitch M
    {moduleTypeCompLev,     connectorDirOut, connectorTypeLogic,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "A>=C",         labelLocLeft }, // 55 Out
    // 60 Mux8-1X
    {moduleTypeMux8to1X,    connectorDirIn,  connectorTypeControl, {{ 10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 60 In1
    {moduleTypeMux8to1X,    connectorDirIn,  connectorTypeControl, {{ 18,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocUp   }, // 60 In2
    {moduleTypeMux8to1X,    connectorDirIn,  connectorTypeControl, {{ 26,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocUp   }, // 60 In3
    {moduleTypeMux8to1X,    connectorDirIn,  connectorTypeControl, {{ 34,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocUp   }, // 60 In4
    {moduleTypeMux8to1X,    connectorDirIn,  connectorTypeControl, {{ 42,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "5",            labelLocUp   }, // 60 In5
    {moduleTypeMux8to1X,    connectorDirIn,  connectorTypeControl, {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "6",            labelLocUp   }, // 60 In6
    {moduleTypeMux8to1X,    connectorDirIn,  connectorTypeControl, {{ 58,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "7",            labelLocUp   }, // 60 In7
    {moduleTypeMux8to1X,    connectorDirIn,  connectorTypeControl, {{ 66,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "8",            labelLocUp   }, // 60 In8
    {moduleTypeMux8to1X,    connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocUp   }, // 60 Ctrl
    {moduleTypeMux8to1X,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 60 Out
    // 61 Clip
    {moduleTypeClip,        connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 61 In
    {moduleTypeClip,        connectorDirIn,  connectorTypeControl, {{ 33,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 61 Mod
    {moduleTypeClip,        connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 61 Out
    // 62 OverDrive
    {moduleTypeOverdrive,   connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 62 In
    {moduleTypeOverdrive,   connectorDirIn,  connectorTypeControl, {{ 33,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 62 Mod
    {moduleTypeOverdrive,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 62 Out
    // 63 Scratch
    {moduleTypeScratch,     connectorDirIn,  connectorTypeControl, {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 63 In
    {moduleTypeScratch,     connectorDirIn,  connectorTypeControl, {{  6,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 63 Mod
    {moduleTypeScratch,     connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 63 Out
    // 64 Gate
    {moduleTypeGate,        connectorDirIn,  connectorTypeLogic,   {{ 35, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 64 In1_1
    {moduleTypeGate,        connectorDirIn,  connectorTypeLogic,   {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 64 In1_2
    {moduleTypeGate,        connectorDirIn,  connectorTypeLogic,   {{ 65, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 64 In2_1
    {moduleTypeGate,        connectorDirIn,  connectorTypeLogic,   {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 64 In2_1
    {moduleTypeGate,        connectorDirOut, connectorTypeLogic,   {{ 52,  -6}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 64 Out1
    {moduleTypeGate,        connectorDirOut, connectorTypeLogic,   {{ 82,  -6}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 64 Out1
    // 65 Unknown
    // 66 Mix2-1B
    {moduleTypeMix2to1B,    connectorDirIn,  connectorTypeControl, {{ 33,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 66 In1
    {moduleTypeMix2to1B,    connectorDirIn,  connectorTypeControl, {{ 58,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 66 In2
    {moduleTypeMix2to1B,    connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Chain",        labelLocRight}, // 66 Chain
    {moduleTypeMix2to1B,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 66 Out
    // 67 Unknown
    // 68 ClkGen
    {moduleTypeClkGen,      connectorDirIn,  connectorTypeLogic,   {{  3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Reset",        labelLocRight}, // 68 Reset
    {moduleTypeClkGen,      connectorDirOut, connectorTypeLogic,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "1/96",         labelLocLeft }, // 68 1/96
    {moduleTypeClkGen,      connectorDirOut, connectorTypeLogic,   {{ -3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "1/16",         labelLocLeft }, // 68 1/16
    {moduleTypeClkGen,      connectorDirOut, connectorTypeLogic,   {{ -3, -24}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "ClkActive",    labelLocLeft }, // 68 1/96
    {moduleTypeClkGen,      connectorDirOut, connectorTypeLogic,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Sync",         labelLocLeft }, // 68 1/96
    // 69 ClkDiv
    {moduleTypeClkDiv,      connectorDirIn,  connectorTypeLogic,   {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Clock",        labelLocRight}, // 69 Clock
    {moduleTypeClkDiv,      connectorDirIn,  connectorTypeLogic,   {{ 40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Reset",        labelLocRight}, // 69 Reset
    {moduleTypeClkDiv,      connectorDirOut, connectorTypeLogic,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 69 Out
    // 70 Unknown
    // 71 EnvFollow
    {moduleTypeEnvFollow,   connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 71 In
    {moduleTypeEnvFollow,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 71 Out
    // 72 NoteScaler
    {moduleTypeNoteScaler,  connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 72 In
    {moduleTypeNoteScaler,  connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 72 Out
    // 73 Unknown
    // 74 WaveWrap
    {moduleTypeWaveWrap,    connectorDirIn,  connectorTypeControl, {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 74 Mod
    {moduleTypeWaveWrap,    connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 74 In
    {moduleTypeWaveWrap,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 74 Out
    // 75 NoteQuant
    {moduleTypeNoteQuant,   connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 75 In
    {moduleTypeNoteQuant,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 75 Out
    // 76 SwOnOffT
    {moduleTypeSwOnOffT,    connectorDirIn,  connectorTypeControl, {{-20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 76 In
    {moduleTypeSwOnOffT,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 76 Out
    {moduleTypeSwOnOffT,    connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 76 Ctrl
    // 77 Unknown
    // 78 Sw1-8
    {moduleTypeSw1to8,      connectorDirIn,  connectorTypeControl, {{ 15,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 78 In
    {moduleTypeSw1to8,      connectorDirOut, connectorTypeControl, {{ 28,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocLeft }, // 78 Out1
    {moduleTypeSw1to8,      connectorDirOut, connectorTypeControl, {{ 36,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocLeft }, // 78 Out2
    {moduleTypeSw1to8,      connectorDirOut, connectorTypeControl, {{ 44,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocLeft }, // 78 Out3
    {moduleTypeSw1to8,      connectorDirOut, connectorTypeControl, {{ 52,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocLeft }, // 78 Out4
    {moduleTypeSw1to8,      connectorDirOut, connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "5",            labelLocLeft }, // 78 Out5
    {moduleTypeSw1to8,      connectorDirOut, connectorTypeControl, {{ 68,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "6",            labelLocLeft }, // 78 Out6
    {moduleTypeSw1to8,      connectorDirOut, connectorTypeControl, {{ 76,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "7",            labelLocLeft }, // 78 Out7
    {moduleTypeSw1to8,      connectorDirOut, connectorTypeControl, {{ 84,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "8",            labelLocLeft }, // 78 Out8
    {moduleTypeSw1to8,      connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 78 Ctrl
    // 79 Sw4-1
    {moduleTypeSw4to1,      connectorDirIn,  connectorTypeControl, {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocLeft }, // 79 In1
    {moduleTypeSw4to1,      connectorDirIn,  connectorTypeControl, {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocLeft }, // 79 In2
    {moduleTypeSw4to1,      connectorDirIn,  connectorTypeControl, {{ 40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocLeft }, // 79 In3
    {moduleTypeSw4to1,      connectorDirIn,  connectorTypeControl, {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocLeft }, // 79 In4
    {moduleTypeSw4to1,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 79 Out
    {moduleTypeSw4to1,      connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 79 Ctrl
    // 80 Unknown
    // 81 LevAmp
    {moduleTypeLevAmp,      connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 81 In
    {moduleTypeLevAmp,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 81 Out
    // 82 Rect
    {moduleTypeRect,        connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 82 In
    {moduleTypeRect,        connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 82 Out
    // 83 ShpStatic
    {moduleTypeShpStatic,   connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 82 In
    {moduleTypeShpStatic,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 82 Out
    // 84 EnvADR
    {moduleTypeEnvADR,      connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 84 Trig/Gate
    {moduleTypeEnvADR,      connectorDirIn,  connectorTypeControl, {{ -3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 84 In
    {moduleTypeEnvADR,      connectorDirIn,  connectorTypeControl, {{ 25,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "AM",           labelLocUp   }, // 84 AM
    {moduleTypeEnvADR,      connectorDirOut, connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Env",          labelLocUp   }, // 84 Env
    {moduleTypeEnvADR,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 84 Out
    {moduleTypeEnvADR,      connectorDirOut, connectorTypeLogic,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 46 End
    // 85 WindSw
    {moduleTypeWindSw,      connectorDirIn,  connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 85 In
    {moduleTypeWindSw,      connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 85 In
    {moduleTypeWindSw,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 85 Out
    {moduleTypeWindSw,      connectorDirOut, connectorTypeLogic,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 85 Gate
    // 86 8Counter
    {moduleType8Counter,    connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Clk",          labelLocRight}, // 86 Clock
    {moduleType8Counter,    connectorDirIn,  connectorTypeLogic,   {{ 10, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rst",          labelLocRight}, // 86 Reset
    {moduleType8Counter,    connectorDirOut, connectorTypeLogic,   {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 86 Out1
    {moduleType8Counter,    connectorDirOut, connectorTypeLogic,   {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocUp   }, // 86 Out2
    {moduleType8Counter,    connectorDirOut, connectorTypeLogic,   {{ 40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocUp   }, // 86 Out3
    {moduleType8Counter,    connectorDirOut, connectorTypeLogic,   {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocUp   }, // 86 Out4
    {moduleType8Counter,    connectorDirOut, connectorTypeLogic,   {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "5",            labelLocUp   }, // 86 Out5
    {moduleType8Counter,    connectorDirOut, connectorTypeLogic,   {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "6",            labelLocUp   }, // 86 Out6
    {moduleType8Counter,    connectorDirOut, connectorTypeLogic,   {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "7",            labelLocUp   }, // 86 Out7
    {moduleType8Counter,    connectorDirOut, connectorTypeLogic,   {{ 90,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "8",            labelLocUp   }, // 86 Out8
    // 87 FltLP
    {moduleTypeFltLP,       connectorDirIn,  connectorTypeAudio,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 87 In
    {moduleTypeFltLP,       connectorDirIn,  connectorTypeControl, {{ 28,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 87 Mod
    {moduleTypeFltLP,       connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 87 Out
    // 88 Sw1-4
    {moduleTypeSw1to4,      connectorDirIn,  connectorTypeControl, {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 88 In
    {moduleTypeSw1to4,      connectorDirOut, connectorTypeControl, {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocLeft }, // 88 Out1
    {moduleTypeSw1to4,      connectorDirOut, connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocLeft }, // 88 Out2
    {moduleTypeSw1to4,      connectorDirOut, connectorTypeControl, {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocLeft }, // 88 Out3
    {moduleTypeSw1to4,      connectorDirOut, connectorTypeControl, {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocLeft }, // 88 Out4
    {moduleTypeSw1to4,      connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 88 Ctrl
    // 89 Flanger
    {moduleTypeFlanger,     connectorDirIn,  connectorTypeAudio,   {{ -3, -13}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 89 In
    {moduleTypeFlanger,     connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 89 Out
    // 90 Sw1-2
    {moduleTypeSw1to2,      connectorDirIn,  connectorTypeControl, {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 88 In
    {moduleTypeSw1to2,      connectorDirOut, connectorTypeControl, {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocLeft }, // 88 Out1
    {moduleTypeSw1to2,      connectorDirOut, connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocLeft }, // 88 Out2
    {moduleTypeSw1to2,      connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 88 Ctrl
    // 91 FlipFlop
    {moduleTypeFlipFlop,    connectorDirIn,  connectorTypeLogic,   {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Clk",          labelLocLeft }, // 91 Clock
    {moduleTypeFlipFlop,    connectorDirIn,  connectorTypeLogic,   {{ 15,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rst",          labelLocLeft }, // 91 Reset
    {moduleTypeFlipFlop,    connectorDirIn,  connectorTypeLogic,   {{ 35, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "In",           labelLocLeft }, // 91 In
    {moduleTypeFlipFlop,    connectorDirOut, connectorTypeLogic,   {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "NotQ",         labelLocRight}, // 91 NotQ
    {moduleTypeFlipFlop,    connectorDirOut, connectorTypeLogic,   {{ 80, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Q",            labelLocRight}, // 91 Q
    // 92 FltClassic
    {moduleTypeFltClassic,  connectorDirIn,  connectorTypeAudio,   {{ -3,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 92
    {moduleTypeFltClassic,  connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },
    {moduleTypeFltClassic,  connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   },
    {moduleTypeFltClassic,  connectorDirIn,  connectorTypeControl, {{  3,  15}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     NULL,           labelLocUp   },
    // 93 Unknown
    // 94 StChorus
    {moduleTypeStChorus,    connectorDirIn,  connectorTypeAudio,   {{ -3,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 94
    {moduleTypeStChorus,    connectorDirOut, connectorTypeAudio,   {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },
    {moduleTypeStChorus,    connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },
    // 95 Unknown
    // 96 OscD
    {moduleTypeOscD,        connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 96 Pitch
    {moduleTypeOscD,        connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 96 Out
    // 97 OscA
    {moduleTypeOscA,        connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 97 Pitch
    {moduleTypeOscA,        connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 97  PitchVar
    {moduleTypeOscA,        connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 97 Out
    // 98 FreqShift
    {moduleTypeFreqShift,   connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 98 Mod
    {moduleTypeFreqShift,   connectorDirIn,  connectorTypeAudio,   {{-10,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 98 In
    {moduleTypeFreqShift,   connectorDirOut, connectorTypeAudio,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Down",         labelLocLeft }, //98 Down
    {moduleTypeFreqShift,   connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Up",           labelLocLeft }, // 98 Up
    // 99 Unknown
    // 100 Sw2-1
    {moduleTypeSw2to1,      connectorDirIn,  connectorTypeControl, {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 100 In1
    {moduleTypeSw2to1,      connectorDirIn,  connectorTypeControl, {{ 40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocLeft }, // 100 In2
    {moduleTypeSw2to1,      connectorDirOut, connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 100 Out
    {moduleTypeSw2to1,      connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 100 Ctrl
    // 101 Unknown
    // 102 FltPhase
    {moduleTypeFltPhase,    connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 102 In
    {moduleTypeFltPhase,    connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 102 PitchVar
    {moduleTypeFltPhase,    connectorDirIn,  connectorTypeControl, {{ 35,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 102 Spr
    {moduleTypeFltPhase,    connectorDirIn,  connectorTypeControl, {{ 55,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 102 FM
    {moduleTypeFltPhase,    connectorDirIn,  connectorTypeControl, {{  3, -12}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 102 Pitch
    {moduleTypeFltPhase,    connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 102 Out
    // 103 EqPeak
    {moduleTypeEqPeak,      connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 103 In
    {moduleTypeEqPeak,      connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 103 Out
    // 104 Unknown
    // 105 ValSw2-1
    {moduleTypeValSw2to1,   connectorDirIn,  connectorTypeControl, {{-24,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 105 In1
    {moduleTypeValSw2to1,   connectorDirIn,  connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "On",           labelLocLeft }, // 105 In2
    {moduleTypeValSw2to1,   connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 105 Ctrl
    {moduleTypeValSw2to1,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 105 Out
    // 106 OscNoise
    {moduleTypeOscNoise,    connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 1106 Pitch
    {moduleTypeOscNoise,    connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 106  PitchVar
    {moduleTypeOscNoise,    connectorDirIn,  connectorTypeControl, {{ 58,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 106  Width
    {moduleTypeOscNoise,    connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 106 Out
    // 107 Unknown
    // 108 Vocoder
    {moduleTypeVocoder,     connectorDirIn,  connectorTypeAudio,   {{  3, -35}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 108 Ctrl
    {moduleTypeVocoder,     connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 108 In
    {moduleTypeVocoder,     connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 108 Out
    // 109 Unknown
    // 110 Unknown
    // 111 Unknown
    // 112 LevAdd
    {moduleTypeLevAdd,      connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 112 In
    {moduleTypeLevAdd,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 112 Out
    // 113 Fade1-2
    {moduleTypeFade1to2,    connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 113 In
    {moduleTypeFade1to2,    connectorDirIn,  connectorTypeControl, {{ 33,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 113 Ctrl
    {moduleTypeFade1to2,    connectorDirOut, connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 113 Out1
    {moduleTypeFade1to2,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 113 Out2
    // 114 Fade2-1
    {moduleTypeFade2to1,    connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 114 In1
    {moduleTypeFade2to1,    connectorDirIn,  connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 114 In2
    {moduleTypeFade2to1,    connectorDirIn,  connectorTypeControl, {{ 33,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 114 Ctrl
    {moduleTypeFade2to1,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 114 Out
    // 115 LevScaler
    {moduleTypeLevScaler,   connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Note",         labelLocRight}, // 115 Note
    {moduleTypeLevScaler,   connectorDirIn,  connectorTypeControl, {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 115 In
    {moduleTypeLevScaler,   connectorDirOut, connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Level",        labelLocUp   }, // 115 Level
    {moduleTypeLevScaler,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 115 Out
    // 116 Mix8-1A
    {moduleTypeMix8to1A,    connectorDirIn,  connectorTypeControl, {{ 21,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 116 In1
    {moduleTypeMix8to1A,    connectorDirIn,  connectorTypeControl, {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocUp   }, // 116 In2
    {moduleTypeMix8to1A,    connectorDirIn,  connectorTypeControl, {{ 39,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocUp   }, // 116 In3
    {moduleTypeMix8to1A,    connectorDirIn,  connectorTypeControl, {{ 48,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocUp   }, // 116 In4
    {moduleTypeMix8to1A,    connectorDirIn,  connectorTypeControl, {{ 57,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "5",            labelLocUp   }, // 116 In5
    {moduleTypeMix8to1A,    connectorDirIn,  connectorTypeControl, {{ 66,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "6",            labelLocUp   }, // 116 In6
    {moduleTypeMix8to1A,    connectorDirIn,  connectorTypeControl, {{ 75,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "7",            labelLocUp   }, // 116 In7
    {moduleTypeMix8to1A,    connectorDirIn,  connectorTypeControl, {{ 84,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "8",            labelLocUp   }, // 116 In8
    {moduleTypeMix8to1A,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 116 Out
    // 117 LevMod
    {moduleTypeLevMod,      connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 117 In
    {moduleTypeLevMod,      connectorDirIn,  connectorTypeControl, {{-10, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Mod",          labelLocLeft }, // 117 Mod
    {moduleTypeLevMod,      connectorDirIn,  connectorTypeControl, {{ 33,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 117 ModDepth
    {moduleTypeLevMod,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 115 Out
    // 118 Digitizer
    {moduleTypeDigitizer,   connectorDirIn,  connectorTypeControl, {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 118 In
    {moduleTypeDigitizer,   connectorDirIn,  connectorTypeControl, {{ 13,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 118 Rate M
    {moduleTypeDigitizer,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 118 Out
    // 119 EnvADDSR
    {moduleTypeEnvADDSR,    connectorDirIn,  connectorTypeLogic,   {{  3,  15}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     "Gate",         labelLocRight}, // 119 Gate
    {moduleTypeEnvADDSR,    connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "AM",           labelLocRight}, // 119 AM
    {moduleTypeEnvADDSR,    connectorDirIn,  connectorTypeControl, {{-17,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 119 In
    {moduleTypeEnvADDSR,    connectorDirOut, connectorTypeControl, {{ -3,  24}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    "Env",          labelLocLeft }, // 119 Env
    {moduleTypeEnvADDSR,    connectorDirOut, connectorTypeControl, {{ -3,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 119 Out
    // 120 Unknown
    // 121 SeqNote
    // 122 Unknown
    // 123 Mix4-1C
    {moduleTypeMix4to1C,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 123
    {moduleTypeMix4to1C,    connectorDirIn,  connectorTypeControl, {{ 20,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     NULL,           labelLocUp   },
    {moduleTypeMix4to1C,    connectorDirIn,  connectorTypeControl, {{ 35,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     NULL,           labelLocUp   },
    {moduleTypeMix4to1C,    connectorDirIn,  connectorTypeControl, {{ 50,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     NULL,           labelLocUp   },
    {moduleTypeMix4to1C,    connectorDirIn,  connectorTypeControl, {{ 65,  10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     NULL,           labelLocUp   },
    // 124 Mux8-1
    {moduleTypeMux8to1,     connectorDirIn,  connectorTypeControl, {{ 10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 60 In1
    {moduleTypeMux8to1,     connectorDirIn,  connectorTypeControl, {{ 18,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocUp   }, // 60 In2
    {moduleTypeMux8to1,     connectorDirIn,  connectorTypeControl, {{ 26,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocUp   }, // 60 In3
    {moduleTypeMux8to1,     connectorDirIn,  connectorTypeControl, {{ 34,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocUp   }, // 60 In4
    {moduleTypeMux8to1,     connectorDirIn,  connectorTypeControl, {{ 42,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "5",            labelLocUp   }, // 60 In5
    {moduleTypeMux8to1,     connectorDirIn,  connectorTypeControl, {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "6",            labelLocUp   }, // 60 In6
    {moduleTypeMux8to1,     connectorDirIn,  connectorTypeControl, {{ 58,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "7",            labelLocUp   }, // 60 In7
    {moduleTypeMux8to1,     connectorDirIn,  connectorTypeControl, {{ 66,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "8",            labelLocUp   }, // 60 In8
    {moduleTypeMux8to1,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocUp   }, // 60 Ctrl
    {moduleTypeMux8to1,     connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 60 Out
    // 125 WahWah
    {moduleTypeWahWah,      connectorDirIn,  connectorTypeAudio,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 112 In
    {moduleTypeWahWah,      connectorDirIn,  connectorTypeControl, {{ 28,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 112 Sweep
    {moduleTypeWahWah,      connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 112 Out
    // 126 Name
    // 127 Fx-In
    {moduleTypeFxtoIn,      connectorDirOut, connectorTypeAudio,   {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 127
    {moduleTypeFxtoIn,      connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },
    // 128 MinMax
    {moduleTypeMinMax,      connectorDirIn,  connectorTypeControl, {{ 40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "A",            labelLocLeft }, // 128 In A
    {moduleTypeMinMax,      connectorDirIn,  connectorTypeControl, {{ 55,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "B",            labelLocLeft }, // 128 In B
    {moduleTypeMinMax,      connectorDirOut, connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Min",          labelLocLeft }, // 128 Min Out
    {moduleTypeMinMax,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Max",          labelLocLeft }, // 128 Max Out
    // 128 Unknown
    // 130 BinCounter
    {moduleTypeBinCounter,  connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Clk",          labelLocRight}, // 130 Clk
    {moduleTypeBinCounter,  connectorDirIn,  connectorTypeLogic,   {{ 17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rst",          labelLocRight}, // 130 Rst
    {moduleTypeBinCounter,  connectorDirOut, connectorTypeLogic,   {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "001",          labelLocUp   }, // 130 Out 001
    {moduleTypeBinCounter,  connectorDirOut, connectorTypeLogic,   {{ 38,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "002",          labelLocUp   }, // 130 Out 002
    {moduleTypeBinCounter,  connectorDirOut, connectorTypeLogic,   {{ 46,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "004",          labelLocUp   }, // 130 Out 004
    {moduleTypeBinCounter,  connectorDirOut, connectorTypeLogic,   {{ 54,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "008",          labelLocUp   }, // 130 Out 008
    {moduleTypeBinCounter,  connectorDirOut, connectorTypeLogic,   {{ 62,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "016",          labelLocUp   }, // 130 Out 016
    {moduleTypeBinCounter,  connectorDirOut, connectorTypeLogic,   {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "032",          labelLocUp   }, // 130 Out 032
    {moduleTypeBinCounter,  connectorDirOut, connectorTypeLogic,   {{ 78,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "064",          labelLocUp   }, // 130 Out 064
    {moduleTypeBinCounter,  connectorDirOut, connectorTypeLogic,   {{ 86,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "128",          labelLocUp   }, // 130 Out 128
    // 131 ADConv
    {moduleTypeADConv,      connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Input",        labelLocRight}, // 131 Input
    {moduleTypeADConv,      connectorDirOut, connectorTypeLogic,   {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D0",           labelLocUp   }, // 131 Out D0
    {moduleTypeADConv,      connectorDirOut, connectorTypeLogic,   {{ 38,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D1",           labelLocUp   }, // 131 Out D1
    {moduleTypeADConv,      connectorDirOut, connectorTypeLogic,   {{ 46,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D2",           labelLocUp   }, // 131 Out D2
    {moduleTypeADConv,      connectorDirOut, connectorTypeLogic,   {{ 54,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D3",           labelLocUp   }, // 131 Out D3
    {moduleTypeADConv,      connectorDirOut, connectorTypeLogic,   {{ 62,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D4",           labelLocUp   }, // 131 Out D4
    {moduleTypeADConv,      connectorDirOut, connectorTypeLogic,   {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D5",           labelLocUp   }, // 131 Out D5
    {moduleTypeADConv,      connectorDirOut, connectorTypeLogic,   {{ 78,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D6",           labelLocUp   }, // 131 Out D6
    {moduleTypeADConv,      connectorDirOut, connectorTypeLogic,   {{ 86,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D7",           labelLocUp   }, // 131 Out D7
    // 132 DAConv
    {moduleTypeDAConv,      connectorDirIn,  connectorTypeLogic,   {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D0",           labelLocUp   }, // 132 In D0
    {moduleTypeDAConv,      connectorDirIn,  connectorTypeLogic,   {{ 38,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D1",           labelLocUp   }, // 132 In D1
    {moduleTypeDAConv,      connectorDirIn,  connectorTypeLogic,   {{ 46,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D2",           labelLocUp   }, // 132 In D2
    {moduleTypeDAConv,      connectorDirIn,  connectorTypeLogic,   {{ 54,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D3",           labelLocUp   }, // 132 In D3
    {moduleTypeDAConv,      connectorDirIn,  connectorTypeLogic,   {{ 62,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D4",           labelLocUp   }, // 132 In D4
    {moduleTypeDAConv,      connectorDirIn,  connectorTypeLogic,   {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D5",           labelLocUp   }, // 132 In D5
    {moduleTypeDAConv,      connectorDirIn,  connectorTypeLogic,   {{ 78,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D6",           labelLocUp   }, // 132 In D6
    {moduleTypeDAConv,      connectorDirIn,  connectorTypeLogic,   {{ 86,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "D7",           labelLocUp   }, // 132 In D7
    {moduleTypeDAConv,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Out",          labelLocUp   }, // 132 Output
    // 133 Unknown
    // 134 FltHP
    {moduleTypeFltHP,       connectorDirIn,  connectorTypeAudio,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 134 In
    {moduleTypeFltHP,       connectorDirIn,  connectorTypeControl, {{ 28,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 134 Mod
    {moduleTypeFltHP,       connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 134 Out
    // 135 Unknown
    // 136 Unknown
    // 137 Unknown
    // 138 Unknown
    // 139 T&H
    {moduleTypeTandH,       connectorDirIn,  connectorTypeLogic,   {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocLeft }, // 139 Ctrl
    {moduleTypeTandH,       connectorDirIn,  connectorTypeControl, {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 139 In
    {moduleTypeTandH,       connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 139 Out

    // 140 Mix4-1S
    {moduleTypeMix4to1S,    connectorDirOut, connectorTypeAudio,   {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 140 OutL
    {moduleTypeMix4to1S,    connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 140 OutR
    {moduleTypeMix4to1S,    connectorDirIn,  connectorTypeAudio,   {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 140 In1L
    {moduleTypeMix4to1S,    connectorDirIn,  connectorTypeAudio,   {{ 10, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 140 In1R
    {moduleTypeMix4to1S,    connectorDirIn,  connectorTypeAudio,   {{ 23, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 140 In2L
    {moduleTypeMix4to1S,    connectorDirIn,  connectorTypeAudio,   {{ 30, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 140 In2R
    {moduleTypeMix4to1S,    connectorDirIn,  connectorTypeAudio,   {{ 43, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 140 In3L
    {moduleTypeMix4to1S,    connectorDirIn,  connectorTypeAudio,   {{ 50, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 140 In3R
    {moduleTypeMix4to1S,    connectorDirIn,  connectorTypeAudio,   {{ 63, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 140 In4L
    {moduleTypeMix4to1S,    connectorDirIn,  connectorTypeAudio,   {{ 70, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 140 In4R
    {moduleTypeMix4to1S,    connectorDirIn,  connectorTypeAudio,   {{-10,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 140 ChainL
    {moduleTypeMix4to1S,    connectorDirIn,  connectorTypeAudio,   {{ -3,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 140 ChainR
    // 141 CtrlSend
    {moduleTypeCtrlSend,    connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Send",         labelLocRight}, // 141 Send In
    {moduleTypeCtrlSend,    connectorDirOut, connectorTypeLogic,   {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 141 Send Out
    {moduleTypeCtrlSend,    connectorDirIn,  connectorTypeControl, {{ 65,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 141 Value
    // 142 PCSend
    {moduleTypePCSend,      connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Send",         labelLocRight}, // 142 Send In
    {moduleTypePCSend,      connectorDirOut, connectorTypeLogic,   {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 142 Send Out
    {moduleTypePCSend,      connectorDirIn,  connectorTypeControl, {{ 65,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 142 Program
    // 143 NoteSend
    {moduleTypeNoteSend,    connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Gate",         labelLocRight}, // 143 Gate
    {moduleTypeNoteSend,    connectorDirIn,  connectorTypeControl, {{ 35,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Vel",          labelLocUp   }, // 143 Velocity
    {moduleTypeNoteSend,    connectorDirIn,  connectorTypeControl, {{ 55,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Note",         labelLocUp   }, // 143 Note
    // 144 SeqEvent
    {moduleTypeSeqEvent,    connectorDirIn,  connectorTypeLogic,   {{  3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Clk",          labelLocRight}, // 144 Clk
    {moduleTypeSeqEvent,    connectorDirIn,  connectorTypeLogic,   {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rst",          labelLocRight}, // 144 Rst
    {moduleTypeSeqEvent,    connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Lp",           labelLocRight}, // 144 Lp
    {moduleTypeSeqEvent,    connectorDirIn,  connectorTypeLogic,   {{ 60, -25}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Park",         labelLocRight}, // 144 Park
    {moduleTypeSeqEvent,    connectorDirIn,  connectorTypeLogic,   {{ 13, -11}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 144 Trig1
    {moduleTypeSeqEvent,    connectorDirIn,  connectorTypeLogic,   {{ 13,  -1}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 144 Trig1
    {moduleTypeSeqEvent,    connectorDirOut, connectorTypeLogic,   {{ -3, -25}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Link",         labelLocLeft }, // 144 Link
    {moduleTypeSeqEvent,    connectorDirOut, connectorTypeLogic,   {{ -3, -11}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 144 Out1
    {moduleTypeSeqEvent,    connectorDirOut, connectorTypeLogic,   {{ -3,  -1}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 144 Out2
    // 145 SeqVal
    {moduleTypeSeqVal,      connectorDirIn,  connectorTypeLogic,   {{  3, -40}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Clk",          labelLocRight}, // 145 Clk
    {moduleTypeSeqVal,      connectorDirIn,  connectorTypeLogic,   {{  3, -30}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rst",          labelLocRight}, // 145 Rst
    {moduleTypeSeqVal,      connectorDirIn,  connectorTypeLogic,   {{  3, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Lp",           labelLocRight}, // 145 Lp
    {moduleTypeSeqVal,      connectorDirIn,  connectorTypeLogic,   {{ 20, -60}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Park",         labelLocRight}, // 145 Park
    {moduleTypeSeqVal,      connectorDirIn,  connectorTypeControl, {{ 13, -40}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 145 Val
    {moduleTypeSeqVal,      connectorDirIn,  connectorTypeLogic,   {{ 13, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 145 Trig1
    {moduleTypeSeqVal,      connectorDirOut, connectorTypeLogic,   {{ -3, -60}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Link",         labelLocLeft }, // 145 Link
    {moduleTypeSeqVal,      connectorDirOut, connectorTypeLogic,   {{ -3, -35}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 145 Out1
    {moduleTypeSeqVal,      connectorDirOut, connectorTypeLogic,   {{ -3,  -5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 145 Out2

    // 146 SeqLev
    {moduleTypeSeqLev,      connectorDirIn,  connectorTypeLogic,   {{  3, -40}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Clk",          labelLocRight}, // 145 Clk
    {moduleTypeSeqLev,      connectorDirIn,  connectorTypeLogic,   {{  3, -30}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rst",          labelLocRight}, // 145 Rst
    {moduleTypeSeqLev,      connectorDirIn,  connectorTypeLogic,   {{  3, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Lp",           labelLocRight}, // 145 Lp
    {moduleTypeSeqLev,      connectorDirIn,  connectorTypeLogic,   {{ 20, -60}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Park",         labelLocRight}, // 145 Park
    {moduleTypeSeqLev,      connectorDirIn,  connectorTypeControl, {{ 13, -40}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 145 Val
    {moduleTypeSeqLev,      connectorDirIn,  connectorTypeLogic,   {{ 13, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 145 Trig1
    {moduleTypeSeqLev,      connectorDirOut, connectorTypeLogic,   {{ -3, -60}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Link",         labelLocLeft }, // 145 Link
    {moduleTypeSeqLev,      connectorDirOut, connectorTypeLogic,   {{ -3, -35}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 145 Out1
    {moduleTypeSeqLev,      connectorDirOut, connectorTypeLogic,   {{ -3,  -5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 145 Out2

    // 147 CtrRcv
    {moduleTypeCtrlRcv,     connectorDirOut, connectorTypeLogic,   {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rcv",          labelLocUp   }, // 147 Rcv
    {moduleTypeCtrlRcv,     connectorDirOut, connectorTypeControl, {{ 92,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Val",          labelLocUp   }, // 147 Value
    // 148 NoteRcv
    {moduleTypeNoteRcv,     connectorDirOut, connectorTypeLogic,   {{ 74,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rcv",          labelLocUp   }, // 148 Rcv
    {moduleTypeNoteRcv,     connectorDirOut, connectorTypeControl, {{ 81,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Vel",          labelLocUp   }, // 148 Vel
    {moduleTypeNoteRcv,     connectorDirOut, connectorTypeControl, {{ 88,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "RVel",         labelLocUp   }, // 148 Release vel
    // 149 NoteZone
    // 150 Compress
    {moduleTypeCompress,    connectorDirIn,  connectorTypeAudio,   {{-10,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   }, // 150
    {moduleTypeCompress,    connectorDirIn,  connectorTypeAudio,   {{ -3,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopRight,    NULL,           labelLocUp   },
    {moduleTypeCompress,    connectorDirIn,  connectorTypeAudio,   {{ 20,   5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorTopLeft,     NULL,           labelLocUp   },
    {moduleTypeCompress,    connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },
    {moduleTypeCompress,    connectorDirOut, connectorTypeAudio,   {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },

    // 151 Unknown
    // 152 KeyQuant
    {moduleTypeKeyQuant,    connectorDirIn,  connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight},    // 152 In
    {moduleTypeKeyQuant,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight},    // 152 Out
    // 153 Unknown
    // 154 SeqCtr
    // 155 Unknown
    // 156 NoteDet
    {moduleTypeNoteDet,     connectorDirOut, connectorTypeLogic,   {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Gate",         labelLocUp   }, // 156 Gate
    {moduleTypeNoteDet,     connectorDirOut, connectorTypeControl, {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Vel",          labelLocUp   }, // 156 Vel
    {moduleTypeNoteDet,     connectorDirOut, connectorTypeControl, {{ 90,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "RVel",         labelLocUp   }, // 156 Release vel
    // 157 LevConv
    {moduleTypeLevConv,     connectorDirIn,  connectorTypeControl, {{-23,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 157 In
    {moduleTypeLevConv,     connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 157 Out
    // 158 Glide
    {moduleTypeGlide,       connectorDirIn,  connectorTypeControl, {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 139 In
    {moduleTypeGlide,       connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Glide on",     labelLocRight}, // 158 Glide On
    {moduleTypeGlide,       connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 139 Out
    // 159 CompSig
    {moduleTypeCompSig,     connectorDirIn,  connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "A",            labelLocLeft }, // 159 A
    {moduleTypeCompSig,     connectorDirIn,  connectorTypeControl, {{ 75,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "B",            labelLocLeft }, // 159 B
    {moduleTypeCompSig,     connectorDirOut, connectorTypeLogic,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "A>=B",         labelLocLeft }, // 159 Cmp
    // 160 ZeroCnt
    {moduleTypeZeroCnt,     connectorDirIn,  connectorTypeControl, {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 160 In
    {moduleTypeZeroCnt,     connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 160 Out
    // 161 MixFader // Skip
    // 162 FltComb
    {moduleTypeFltComb,     connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 162 In
    {moduleTypeFltComb,     connectorDirIn,  connectorTypeControl, {{  3, -12}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 162 Pitch
    {moduleTypeFltComb,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 162 PitchVar
    {moduleTypeFltComb,     connectorDirIn,  connectorTypeControl, {{ 55,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 162 FM
    {moduleTypeFltComb,     connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 162 Out
    // 163 OscShpA
    {moduleTypeOscShpA,     connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 163 Pitch
    {moduleTypeOscShpA,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 163 PitchVar
    {moduleTypeOscShpA,     connectorDirIn,  connectorTypeAudio,   {{  3, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Sync",         labelLocUp   }, // 163 Sync
    {moduleTypeOscShpA,     connectorDirIn,  connectorTypeAudio,   {{ 55,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // FM
    {moduleTypeOscShpA,     connectorDirIn,  connectorTypeAudio,   {{ 73,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 163 Shape
    {moduleTypeOscShpA,     connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // Out
    // 164 OscDual
    {moduleTypeOscDual,     connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 164 Pitch
    {moduleTypeOscDual,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 164 PitchVar
    {moduleTypeOscDual,     connectorDirIn,  connectorTypeAudio,   {{  3, -20}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Sync",         labelLocUp   }, // 164 Sync
    {moduleTypeOscDual,     connectorDirIn,  connectorTypeAudio,   {{ 48, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 164 PW
    {moduleTypeOscDual,     connectorDirIn,  connectorTypeAudio,   {{ 48,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 164 Phase
    {moduleTypeOscDual,     connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 164 Out
    // 165 DXRouter
    {moduleTypeDXRouter,    connectorDirIn,  connectorTypeAudio,   {{  5,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocLeft }, // 164 In1
    {moduleTypeDXRouter,    connectorDirOut, connectorTypeAudio,   {{ 11,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 164 Out1
    {moduleTypeDXRouter,    connectorDirIn,  connectorTypeAudio,   {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocLeft }, // 164 In2
    {moduleTypeDXRouter,    connectorDirOut, connectorTypeAudio,   {{ 26,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 164 Out2
    {moduleTypeDXRouter,    connectorDirIn,  connectorTypeAudio,   {{ 35,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocLeft }, // 164 In3
    {moduleTypeDXRouter,    connectorDirOut, connectorTypeAudio,   {{ 41,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 164 Out3
    {moduleTypeDXRouter,    connectorDirIn,  connectorTypeAudio,   {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocLeft }, // 164 In4
    {moduleTypeDXRouter,    connectorDirOut, connectorTypeAudio,   {{ 56,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 164 Out4
    {moduleTypeDXRouter,    connectorDirIn,  connectorTypeAudio,   {{ 65,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "5",            labelLocLeft }, // 164 In5
    {moduleTypeDXRouter,    connectorDirOut, connectorTypeAudio,   {{ 71,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 164 Out5
    {moduleTypeDXRouter,    connectorDirIn,  connectorTypeAudio,   {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "6",            labelLocLeft }, // 164 In6
    {moduleTypeDXRouter,    connectorDirOut, connectorTypeAudio,   {{ 86,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 164 Out6
    {moduleTypeDXRouter,    connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Main",         labelLocUp   }, // 164 Out
    // 166 Unknown
    // 167 PShift
    {moduleTypePShift,      connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 167 PitchVar
    {moduleTypePShift,      connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 167 In
    {moduleTypePShift,      connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 167 Out
    // 168 Unknown
    // 169 ModAHD
    {moduleTypeModAHD,      connectorDirIn,  connectorTypeLogic,   {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Trig",         labelLocUp   }, // 169 Trig
    {moduleTypeModAHD,      connectorDirIn,  connectorTypeControl, {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 169 Attack M
    {moduleTypeModAHD,      connectorDirIn,  connectorTypeControl, {{ 40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 169 Hold M
    {moduleTypeModAHD,      connectorDirIn,  connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 169 Delay M
    {moduleTypeModAHD,      connectorDirIn,  connectorTypeControl, {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 169 In
    {moduleTypeModAHD,      connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 169 AM
    {moduleTypeModAHD,      connectorDirOut, connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Env",          labelLocLeft }, // 169 Env
    {moduleTypeModAHD,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 169 Out
    // 170 2-In
    {moduleType2toIn,       connectorDirOut, connectorTypeAudio,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "L",            labelLocUp   }, // 170 OutL
    {moduleType2toIn,       connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "R",            labelLocUp   }, // 170 OutR
    // 171 4-In
    {moduleType4toIn,       connectorDirOut, connectorTypeAudio,   {{-45,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "1",            labelLocUp   }, // 170 Out1
    {moduleType4toIn,       connectorDirOut, connectorTypeAudio,   {{-31,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "2",            labelLocUp   }, // 170 Out2
    {moduleType4toIn,       connectorDirOut, connectorTypeAudio,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "3",            labelLocUp   }, // 170 Out3
    {moduleType4toIn,       connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "4",            labelLocUp   }, // 170 Out4
    // 172 DlySingleA
    {moduleTypeDlySingleA,  connectorDirIn,  connectorTypeAudio,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 172 In
    {moduleTypeDlySingleA,  connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 172 Out
    // 173 DlySingleB
    {moduleTypeDlySingleB,  connectorDirIn,  connectorTypeAudio,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 173 In
    {moduleTypeDlySingleB,  connectorDirIn,  connectorTypeAudio,   {{ 33,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 173 Mod
    {moduleTypeDlySingleB,  connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 173 Out
    // 174 DelayDual
    {moduleTypeDelayDual,   connectorDirIn,  connectorTypeAudio,   {{-25, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "In",           labelLocRight}, // 174 In
    {moduleTypeDelayDual,   connectorDirIn,  connectorTypeAudio,   {{ 33,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 174 Time Mod 1
    {moduleTypeDelayDual,   connectorDirIn,  connectorTypeAudio,   {{ 68,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 174 Time Mod 2
    {moduleTypeDelayDual,   connectorDirOut, connectorTypeAudio,   {{ 53,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 174 Out1
    {moduleTypeDelayDual,   connectorDirOut, connectorTypeAudio,   {{ 88,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 174 Out2
    // 175 DelayQuad
    {moduleTypeDelayQuad,   connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "In",           labelLocLeft }, // 174 In
    {moduleTypeDelayQuad,   connectorDirIn,  connectorTypeAudio,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 175 Time1
    {moduleTypeDelayQuad,   connectorDirIn,  connectorTypeAudio,   {{ 23,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 175 Time2
    {moduleTypeDelayQuad,   connectorDirIn,  connectorTypeAudio,   {{ 43,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 175 Time3
    {moduleTypeDelayQuad,   connectorDirIn,  connectorTypeAudio,   {{ 63,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 175 Time4
    {moduleTypeDelayQuad,   connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Main",         labelLocUp   }, // 175 Out Main
    {moduleTypeDelayQuad,   connectorDirOut, connectorTypeAudio,   {{ 13, -14}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 175 Out1
    {moduleTypeDelayQuad,   connectorDirOut, connectorTypeAudio,   {{ 33, -14}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 175 Out2
    {moduleTypeDelayQuad,   connectorDirOut, connectorTypeAudio,   {{ 53, -14}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 175 Out3
    {moduleTypeDelayQuad,   connectorDirOut, connectorTypeAudio,   {{ 73, -14}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 175 Out4
    // 176 DelayA
    {moduleTypeDelayA,      connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 177
    {moduleTypeDelayA,      connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },
    // 177 DelayB
    {moduleTypeDelayB,      connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 177
    {moduleTypeDelayB,      connectorDirIn,  connectorTypeControl, {{ 43,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 169 E
    {moduleTypeDelayB,      connectorDirIn,  connectorTypeControl, {{ 68,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 169 E
    {moduleTypeDelayB,      connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   },
    // 178 DlyClock
    {moduleTypeDlyClock,    connectorDirIn,  connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 178 In
    {moduleTypeDlyClock,    connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Clk",          labelLocRight}, // 178 Clk
    {moduleTypeDlyClock,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 178 Out
    // 179 DlyShiftReg
    {moduleTypeDlyShiftReg, connectorDirIn,  connectorTypeControl, {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 179 In
    {moduleTypeDlyShiftReg, connectorDirIn,  connectorTypeLogic,   {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Clk",          labelLocRight}, // 179 Clk
    {moduleTypeDlyShiftReg, connectorDirOut, connectorTypeControl, {{ 28,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 179 Out1
    {moduleTypeDlyShiftReg, connectorDirOut, connectorTypeControl, {{ 36,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocUp   }, // 179 Out2
    {moduleTypeDlyShiftReg, connectorDirOut, connectorTypeControl, {{ 44,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocUp   }, // 179 Out3
    {moduleTypeDlyShiftReg, connectorDirOut, connectorTypeControl, {{ 52,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocUp   }, // 179 Out4
    {moduleTypeDlyShiftReg, connectorDirOut, connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "5",            labelLocUp   }, // 179 Out5
    {moduleTypeDlyShiftReg, connectorDirOut, connectorTypeControl, {{ 68,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "6",            labelLocUp   }, // 179 Out6
    {moduleTypeDlyShiftReg, connectorDirOut, connectorTypeControl, {{ 76,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "7",            labelLocUp   }, // 179 Out7
    {moduleTypeDlyShiftReg, connectorDirOut, connectorTypeControl, {{ 84,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "8",            labelLocUp   }, // 179 Out8
    // 180 Operator
    {moduleTypeOperator,    connectorDirIn,  connectorTypeControl, {{  3, -45}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Freq",         labelLocUp   }, // 180 Freq
    {moduleTypeOperator,    connectorDirIn,  connectorTypeAudio,   {{ 90, -60}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "FM",           labelLocUp   }, // 180 FM
    {moduleTypeOperator,    connectorDirIn,  connectorTypeLogic,   {{  3, -35}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Gate",         labelLocUp   }, // 180 Freq
    {moduleTypeOperator,    connectorDirIn,  connectorTypeControl, {{  3, -25}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Note",         labelLocUp   }, // 180 Note
    {moduleTypeOperator,    connectorDirIn,  connectorTypeControl, {{  3, -15}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "AMod",         labelLocUp   }, // 180 Amod
    {moduleTypeOperator,    connectorDirIn,  connectorTypeControl, {{  3,  -5}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Vel",          labelLocUp   }, // 180 Vel
    {moduleTypeOperator,    connectorDirIn,  connectorTypeControl, {{  3, -60}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Pitch",        labelLocUp   }, // 180 Pitch
    {moduleTypeOperator,    connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 180 Out
    // 181 DlyEight
    {moduleTypeDlyEight,    connectorDirIn,  connectorTypeAudio,   {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 181 In
    {moduleTypeDlyEight,    connectorDirOut, connectorTypeAudio,   {{ 20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 181 Out1
    {moduleTypeDlyEight,    connectorDirOut, connectorTypeAudio,   {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 181 Out2
    {moduleTypeDlyEight,    connectorDirOut, connectorTypeAudio,   {{ 40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 181 Out3
    {moduleTypeDlyEight,    connectorDirOut, connectorTypeAudio,   {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 181 Out4
    {moduleTypeDlyEight,    connectorDirOut, connectorTypeAudio,   {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 181 Out5
    {moduleTypeDlyEight,    connectorDirOut, connectorTypeAudio,   {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 181 Out6
    {moduleTypeDlyEight,    connectorDirOut, connectorTypeAudio,   {{ 80,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 181 Out7
    {moduleTypeDlyEight,    connectorDirOut, connectorTypeAudio,   {{ 90,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 181 Out8
    // 182 DlyStereo
    {moduleTypeDlyStereo,   connectorDirIn,  connectorTypeAudio,   {{ -3, -24}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 181 In
    {moduleTypeDlyStereo,   connectorDirOut, connectorTypeAudio,   {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "L",            labelLocLeft }, // 181 Out1
    {moduleTypeDlyStereo,   connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "R",            labelLocLeft }, // 181 Out2
    // 183 OscPM
    {moduleTypeOscPM,       connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 9 OscC PitchVar
    {moduleTypeOscPM,       connectorDirIn,  connectorTypeAudio,   {{  3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Sync",         labelLocRight}, // Sync
    {moduleTypeOscPM,       connectorDirIn,  connectorTypeAudio,   {{ 55,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // Phase M
    {moduleTypeOscPM,       connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // Pitch
    {moduleTypeOscPM,       connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // Out
    // 184 Mix1-1A
    {moduleTypeMix1to1A,    connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 184 In
    {moduleTypeMix1to1A,    connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Chain",        labelLocRight}, // 184 Chain
    {moduleTypeMix1to1A,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocRight}, // 184 Out
    // 185 Mix1-1S
    {moduleTypeMix1to1S,    connectorDirIn,  connectorTypeControl, {{-24,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "L",            labelLocLeft }, // 185 InL
    {moduleTypeMix1to1S,    connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "R",            labelLocLeft }, // 185 InR
    {moduleTypeMix1to1S,    connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "L",            labelLocRight}, // 185 Chain L
    {moduleTypeMix1to1S,    connectorDirIn,  connectorTypeControl, {{ 10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "R Chain",      labelLocRight}, // 185 Chain R
    {moduleTypeMix1to1S,    connectorDirOut, connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "L",            labelLocLeft }, // 185 Out L
    {moduleTypeMix1to1S,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "R",            labelLocLeft }, // 185 Out R
    // 186 Sw1-2M
    {moduleTypeSw1to2M,     connectorDirIn,  connectorTypeControl, {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 186 In
    {moduleTypeSw1to2M,     connectorDirOut, connectorTypeControl, {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocLeft }, // 186 Out1
    {moduleTypeSw1to2M,     connectorDirOut, connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocLeft }, // 186 Out2
    {moduleTypeSw1to2M,     connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 186 Ctrl
    // 187 Sw2-1M
    {moduleTypeSw1to2M,     connectorDirIn,  connectorTypeControl, {{ 30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 187 In
    {moduleTypeSw1to2M,     connectorDirIn,  connectorTypeControl, {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocLeft }, // 187 Out1
    {moduleTypeSw1to2M,     connectorDirOut, connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocLeft }, // 187 Out2
    {moduleTypeSw1to2M,     connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Ctrl",         labelLocRight}, // 187 Ctrl
    // 188 ConstSwM
    {moduleTypeConstSwM,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocLeft }, // 188 Out
    // 189 NoiseGate
    {moduleTypeNoiseGate,   connectorDirIn,  connectorTypeControl, {{ -3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 189 In
    {moduleTypeNoiseGate,   connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 189 In
    {moduleTypeNoiseGate,   connectorDirOut, connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Env",          labelLocLeft }, // 189 Env
    // 190 LfoB
    {moduleTypeLfoB,        connectorDirIn,  connectorTypeControl, {{ 15,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rate",         labelLocUp   }, // 190 Rate
    {moduleTypeLfoB,        connectorDirIn,  connectorTypeControl, {{ 22,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 190 Ratevar
    {moduleTypeLfoB,        connectorDirIn,  connectorTypeControl, {{  3, -17}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rst",          labelLocUp   }, // 190 Reset
    {moduleTypeLfoB,        connectorDirIn,  connectorTypeControl, {{ 60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Rate",         labelLocUp   }, // 190 PhaseM
    {moduleTypeLfoB,        connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 190 Out
    {moduleTypeLfoB,        connectorDirOut, connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 190 Sync
    // 191 Unknown
    // 192 Phaser
    {moduleTypePhaser,      connectorDirIn,  connectorTypeAudio,   {{-18,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 192 In
    {moduleTypePhaser,      connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 192 Out
    // 193 Mix4-1A
    {moduleTypeMix4to1A,    connectorDirIn,  connectorTypeControl, {{ 25,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 193 In1
    {moduleTypeMix4to1A,    connectorDirIn,  connectorTypeControl, {{ 40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocUp   }, // 193 In2
    {moduleTypeMix4to1A,    connectorDirIn,  connectorTypeControl, {{ 55,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "3",            labelLocUp   }, // 193 In3
    {moduleTypeMix4to1A,    connectorDirIn,  connectorTypeControl, {{ 70,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "4",            labelLocUp   }, // 193 In4
    {moduleTypeMix4to1A,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 193 Out
    // 194 Mix2-1A
    {moduleTypeMix2to1A,    connectorDirIn,  connectorTypeControl, {{ 50,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "1",            labelLocUp   }, // 194 In1
    {moduleTypeMix2to1A,    connectorDirIn,  connectorTypeControl, {{ 75,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "2",            labelLocUp   }, // 194 In2
    {moduleTypeMix2to1A,    connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Chain",        labelLocRight}, // 185 Chain L
    {moduleTypeMix2to1A,    connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 194 Out
    // 195 ModAmt
    {moduleTypeModAmt,      connectorDirIn,  connectorTypeControl, {{-10,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 194 In1
    {moduleTypeModAmt,      connectorDirIn,  connectorTypeControl, {{-17,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Mod",          labelLocLeft }, // 194 In2
    {moduleTypeModAmt,      connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 194 Out

    // 196 OscPerc
    {moduleTypeOscPerc,     connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 196 Pitch
    {moduleTypeOscPerc,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 196  PitchVar
    {moduleTypeOscPerc,     connectorDirIn,  connectorTypeAudio,   {{ 25,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Trig",         labelLocUp   }, // 196 Trig
    {moduleTypeOscPerc,     connectorDirOut, connectorTypeAudio,   {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 196 Out

    // 197 Status
    {moduleTypeStatus,      connectorDirOut, connectorTypeLogic,   {{-60,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Patch Active", labelLocUp   }, // 197 Patch Active
    {moduleTypeStatus,      connectorDirOut, connectorTypeLogic,   {{-40,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Var. Active",  labelLocUp   }, // 197 Var Active
    {moduleTypeStatus,      connectorDirOut, connectorTypeControl, {{-20,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Voice No.",    labelLocUp   }, // 197 Voice No.
    // 198 PitchTrack
    {moduleTypePitchTrack,  connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  "Input",        labelLocRight}, // 198 Input
    {moduleTypePitchTrack,  connectorDirOut, connectorTypeLogic,   {{-30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Period",       labelLocUp   }, // 198 Period
    {moduleTypePitchTrack,  connectorDirOut, connectorTypeLogic,   {{-19,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Gate",         labelLocUp   }, // 198 Gate
    {moduleTypePitchTrack,  connectorDirOut, connectorTypeControl, {{ -8,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Pitch",        labelLocUp   }, // 198 Pitch
    // 199 MonoKey
    {moduleTypeMonoKey,     connectorDirOut, connectorTypeControl, {{-30,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Pitch",        labelLocUp   }, // 199 Pitch
    {moduleTypeMonoKey,     connectorDirOut, connectorTypeLogic,   {{-19,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Gate",         labelLocUp   }, // 198 Gate
    {moduleTypeMonoKey,     connectorDirOut, connectorTypeControl, {{ -8,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, "Vel",          labelLocUp   }, // 199 Vel
    // 200 RandomA
    {moduleTypeRandomA,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocUp   }, // 200 Pitch
    {moduleTypeRandomA,     connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 200 Vel
    // 201 Red2Blue -- ???
    // 202 RandomB
    {moduleTypeRandomB,     connectorDirIn,  connectorTypeControl, {{  3, -10}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 200 Rate
    {moduleTypeRandomB,     connectorDirIn,  connectorTypeControl, {{  3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomLeft,  NULL,           labelLocRight}, // 202 RateVar
    {moduleTypeRandomB,     connectorDirOut, connectorTypeControl, {{ -3,  -3}, {CONNECTOR_SIZE, CONNECTOR_SIZE}}, anchorBottomRight, NULL,           labelLocUp   }, // 202 Out
    // 203 Blue2Red -- ???
    // 204 RndClkA
    // 205 RndTrig
    // 206 RndClkB
    // 207 Unknown
    // 208 RndPattern
};

// moduleType, paramType, offsetX, offsetY, label, range, defaultValue, string map
const tModeLocation modeLocationList[] = {
    {moduleTypeOscShpB,    paramType1StandardToggle, paramType2Toggle, {{ 20,   5}, { 7, 7}}, anchorTopLeft,     "Wave",  8, 0, oscShpBStrMap      },  // 8 OscShpB
    {moduleTypeOscC,       paramType1StandardToggle, paramType2Toggle, {{-30,   5}, { 7, 7}}, anchorTopRight,    "Wave",  6, 0, shapeOscATypeStrMap},  // 9 Wave
    {moduleTypeReverb,     paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, {14, 7}}, anchorBottomLeft,  "Type",  4, 0, reverbTypeStrMap   },  // 12 Reverb
    {moduleTypeLfoC,       paramType1StandardToggle, paramType2Toggle, {{ 64,  -3}, { 7, 7}}, anchorBottomLeft,  "Wave",  6, 0, lfoWaveStrMap      },  // 24 LfoC
    {moduleTypeDriver,     paramType1StandardToggle, paramType2Toggle, {{ 35,  -3}, { 7, 7}}, anchorBottomLeft,  "Type",  4, 0, driverTypeStrMap   },  // 35 Type
    {moduleTypePulse,      paramType1StandardToggle, paramType2Toggle, {{-13,  -3}, { 7, 7}}, anchorBottomRight, "Mode",  2, 0, pulseModeStrMap    },  // 38 Mode
    {moduleTypeDelay,      paramType1StandardToggle, paramType2Toggle, {{-13,  -3}, { 7, 7}}, anchorBottomRight, "Mode",  2, 0, pulseModeStrMap    },  // 42 Mode
    {moduleTypeGate,       paramType1StandardToggle, paramType2Toggle, {{ 40,  -3}, { 7, 7}}, anchorBottomLeft,  "G1",    6, 0, gateTypeStrMap     },  // 64 Gate 1 Type
    {moduleTypeGate,       paramType1StandardToggle, paramType2Toggle, {{ 70,  -3}, { 7, 7}}, anchorBottomLeft,  "G2",    6, 0, gateTypeStrMap     },  // 64 Gate 2 Type
    {moduleTypeClkDiv,     paramType1StandardToggle, paramType2Toggle, {{ 80,  -3}, { 7, 7}}, anchorBottomLeft,  "Mode",  2, 0, divModeStrMap      },  // 69 DivMode
    {moduleTypeFltLP,      paramType1StandardToggle, paramType2Toggle, {{ 67,  -3}, { 7, 7}}, anchorBottomLeft,  "Slope", 6, 2, fltLPSlopeStrMap   },  // 87 FltLP
    {moduleTypeFlipFlop,   paramType1StandardToggle, paramType2Toggle, {{ 45,  -3}, { 7, 7}}, anchorBottomLeft,  "Type",  2, 0, flipFlopStrMap     },  // 91 Selector
    {moduleTypeOscD,       paramType1StandardToggle, paramType2Toggle, {{-30,   5}, { 7, 7}}, anchorTopRight,    "Wave",  6, 0, shapeOscATypeStrMap},  // 96 Wave
    {moduleTypeFltHP,      paramType1StandardToggle, paramType2Toggle, {{ 67,  -3}, { 7, 7}}, anchorBottomLeft,  "Slope", 6, 2, fltLPSlopeStrMap   },  // 134 FltLP
    {moduleTypeDlySingleA, paramType1StandardToggle, paramType2Toggle, {{ 10,  -3}, { 7, 7}}, anchorBottomLeft,  "Slope", 7, 0, delayRangeStrMap   },  // 172 Delay Range
    {moduleTypeDlySingleB, paramType1StandardToggle, paramType2Toggle, {{ 10,  -3}, { 7, 7}}, anchorBottomLeft,  "Slope", 7, 0, delayRangeStrMap   },  // 173 Delay Range
    {moduleTypeDelayDual,  paramType1StandardToggle, paramType2Toggle, {{ 10,  -3}, { 7, 7}}, anchorBottomLeft,  "Slope", 7, 0, delayRangeStrMap   },  // 174 Delay Range
    {moduleTypeDelayQuad,  paramType1StandardToggle, paramType2Toggle, {{ 80,  -3}, { 7, 7}}, anchorBottomLeft,  "Slope", 7, 0, delayRangeStrMap   },  // 175 Delay Range
    {moduleTypeDelayA,     paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7, 7}}, anchorBottomLeft,  "Slope", 7, 0, delayRangeStrMap   },  // 176 Delay Range
    {moduleTypeDelayB,     paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, { 7, 7}}, anchorBottomLeft,  "Slope", 7, 0, delayRangeStrMap   },  // 177 Delay Range
    {moduleTypeDlyStereo,  paramType1StandardToggle, paramType2Toggle, {{ 10,  -3}, { 7, 7}}, anchorBottomLeft,  "Slope", 7, 0, delayRangeStrMap   },  // 178 Delay Range
    {moduleTypeDlyEight,   paramType1StandardToggle, paramType2Toggle, {{ 10, -10}, { 7, 7}}, anchorBottomLeft,  "Slope", 7, 0, delayRangeStrMap   },  // 178 Delay Range
    {moduleTypeOscPM,      paramType1StandardToggle, paramType2Toggle, {{-30,   5}, { 7, 7}}, anchorTopRight,    "Wave",  6, 0, shapeOscATypeStrMap},  // 183 Wave
};

//{moduleTypeReverb,     paramType1StandardToggle, paramType2Toggle, {{  3,  -3}, {14, 7}}, anchorBottomLeft,  "Type",      4, 0, reverbTypeStrMap,    NULL          },
//{moduleTypeOscC,       paramType1StandardToggle, paramType2Toggle, {{-30,   5}, {7,  7}}, anchorTopRight,    NULL,        5,  0, shapeTypeStrMap,    NULL          },     // 9 Waveform
//{moduleTypeLfoC,    paramType1StandardToggle,  paramType2Toggle, {{64, -3}, {7, 7}}, anchorBottomLeft,  NULL,  6, 0,  lfoWaveStrMap,  NULL},  // 24 Wave
//    {moduleTypePulse,    paramType1StandardToggle, paramType2Toggle, {{ -13, -3}, {7,  7}}, anchorBottomRight,  NULL,       2,  0, pulseModeStrMap, NULL},  // 38 Range
//    {moduleTypeDelay,    paramType1StandardToggle, paramType2Toggle, {{ -13, -3}, {7,  7}}, anchorBottomRight,  NULL,       2,  0, pulseModeStrMap, NULL},  // 42 Mode
// {moduleTypeGate,   paramType1StandardToggle, paramType2Toggle, {{ 40, -3}, {7,  7}}, anchorBottomLeft,  NULL,        6,  0, gateTypeStrMap,   NULL          }, // 64 Gate 1 Type
// {moduleTypeGate,   paramType1StandardToggle, paramType2Toggle, {{ 70, -3}, {7,  7}}, anchorBottomLeft,  NULL,        6,  0, gateTypeStrMap,   NULL          }, // 64 Gate 2 Type
//    {moduleTypeClkDiv,  paramType1StandardToggle,     paramType2Toggle,   {{ 80,  -3}, {7, 7}}, anchorBottomLeft,  NULL,    2, 0, divModeStrMap,               NULL          },  // 69 DivMode
// {moduleTypeFltLP, paramType1StandardToggle, paramType2Toggle, {{ 67, -3}, {7,  7}}, anchorBottomLeft,  "Slope",       6,  2, fltLPSlopeStrMap,   NULL          },
// {moduleTypeFlipFlop,   paramType1StandardToggle, paramType2Toggle, {{ 45, -3}, {7,  7}}, anchorBottomLeft,  NULL,        2,  0, flipFlopStrMap,   NULL          }, // 91 Selector
//    {moduleTypeOscD,       paramType1StandardToggle, paramType2Toggle, {{-20,   5}, {7,  7}}, anchorTopRight,    NULL,        5,  0, shapeTypeStrMap,    NULL          },     // 96 Waveform


const tVolumeLocation volumeLocationList[] = {
    {moduleTypeMix4to1C, volumeTypeMono,     {{-15,  6}, {3, 25}}, anchorTopRight},
    {moduleTypeCompress, volumeTypeCompress, {{-18,  6}, {4, 38}}, anchorTopRight},
    {moduleType2toOut,   volumeTypeStereo,   {{-25,  6}, {3, 10}}, anchorTopRight},
    {moduleTypeFxtoIn,   volumeTypeStereo,   {{-25,  6}, {3, 10}}, anchorTopRight},
    {moduleTypeMix4to1S, volumeTypeStereo,   {{-10, 13}, {3, 15}}, anchorTopRight}, };

const tLedLocation    ledLocationList[] = {
    {moduleTypeInvert,  ledTypeYes, {{-40, 10}, {3, 3}}, anchorTopRight},
    {moduleTypeInvert,  ledTypeYes, {{-10, 10}, {3, 3}}, anchorTopRight},
    {moduleTypeEnvADSR, ledTypeYes, {{  3,  8}, {3, 3}}, anchorTopLeft }, };

#endif // __MODULE_RESOURCES_H__
