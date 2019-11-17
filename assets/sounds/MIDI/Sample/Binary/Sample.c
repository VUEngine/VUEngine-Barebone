// Generated with a modified version of Thunderstruck's MIDI converter and exporter

#include <MIDI.h>

// Target timer resolution in us = 880

// Instrument: square;
const u16 SampleThemeTrack1[] =
{
  PAU, B_4, PAU, B_4, PAU, FS4, PAU, B_4, PAU, A_4, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, D_5, PAU, B_4, PAU, D_5, PAU, CS5, PAU, CS5, PAU, D_5, PAU, E_5, PAU, FS5, PAU, E_5, PAU, E_5, PAU, E_5, PAU, FS5, PAU, E_5, DS5, CS5, B_4, PAU, FS4, PAU, B_4, PAU, B_4, PAU, CS5, PAU, DS5, PAU, E_5, PAU, FS5, PAU, FS5, PAU, FS5, G_5, PAU, A_5, PAU, B_5, PAU, B_5, PAU, B_5, PAU, A_5, PAU, G_5, PAU, A_5, PAU, G_5, PAU, FS5, PAU, FS5, PAU, G_5, PAU, FS5, PAU, E_5, PAU, E_5, PAU, FS5, PAU, G_5, PAU, FS5, PAU, E_5, PAU, D_5, PAU, D_5, E_5, PAU, FS5, PAU, E_5, PAU, D_5, PAU, CS5, PAU, CS5, DS5, PAU, F_5, PAU, GS5, PAU, FS5, PAU, FS4, PAU, FS4, FS4, GS4, PAU, GS4, PAU, GS4, PAU, AS4, PAU, B_4, PAU, FS4, PAU, B_4, PAU, B_4, CS5, PAU, DS5, PAU, E_5, PAU, FS5, PAU, FS5, PAU, FS5, PAU, G_5, PAU, A_5, PAU, B_5, PAU, B_5, PAU, B_5, PAU, A_5, PAU, G_5, PAU, A_5, PAU, G_5, PAU, FS5, PAU, FS5, PAU, G_5, PAU, FS5, PAU, E_5, PAU, E_5, PAU, FS5, PAU, G_5, PAU, FS5, PAU, E_5, PAU, D_5, PAU, CS5, PAU, D_5, PAU, E_5, PAU, D_5, PAU, E_5, PAU, FS5, PAU, FS5, FS5, E_5, PAU, D_5, PAU, FS5, PAU, FS6, PAU, B_5, PAU, FS5, PAU, G_5, PAU, A_5, PAU, B_5, PAU, FS5, PAU, B_5, PAU, B_5, PAU, CS6, PAU, D_6, PAU, E_6, PAU, CS6, PAU, A_5, PAU, E_5, PAU, E_5, PAU, FS5, PAU, A_5, PAU, G_5, PAU, FS5, PAU, E_5, PAU, FS5, PAU, B_4, PAU, B_4, PAU, B_4, PAU, AS4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, E_5, PAU, FS5, PAU, FS5, E_5, PAU, FS5, PAU, D_6, PAU, CS6, PAU, B_5, PAU, FS5, PAU, FS5, PAU, FS5, PAU, D_5, PAU, B_5, PAU, C_6, PAU, D_6, PAU, E_6, PAU, E_6, PAU, FS6, PAU, G_6, PAU, A_6, PAU, G_6, PAU, FS6, PAU, FS5, PAU, FS5, PAU, FS5, PAU, GS5, PAU, GS5, PAU, GS5, PAU, AS5, PAU, B_4, PAU, FS4, PAU, B_4, PAU, B_4, PAU, CS5, PAU, DS5, PAU, E_5, PAU, FS5, PAU, FS5, PAU, FS5, G_5, PAU, A_5, PAU, B_5, PAU, B_5, PAU, B_5, PAU, A_5, PAU, G_5, PAU, A_5, PAU, G_5, PAU, FS5, PAU, FS5, PAU, G_5, PAU, FS5, PAU, E_5, PAU, E_5, PAU, FS5, PAU, G_5, PAU, FS5, PAU, E_5, PAU, D_5, PAU, D_5, E_5, PAU, FS5, PAU, E_5, PAU, D_5, PAU, CS5, PAU, CS5, DS5, PAU, F_5, PAU, GS5, PAU, FS5, PAU, FS4, PAU, FS4, FS4, GS4, PAU, GS4, PAU, GS4, PAU, AS4, PAU, B_4, PAU, FS4, PAU, B_4, PAU, B_4, CS5, PAU, DS5, PAU, E_5, PAU, FS5, PAU, FS5, PAU, FS5, PAU, G_5, PAU, A_5, PAU, B_5, PAU, B_5, PAU, B_5, PAU, A_5, PAU, G_5, PAU, A_5, PAU, G_5, PAU, FS5, PAU, FS5, PAU, G_5, PAU, FS5, PAU, E_5, PAU, E_5, PAU, FS5, PAU, G_5, PAU, FS5, PAU, E_5, PAU, D_5, PAU, CS5, PAU, D_5, PAU, E_5, PAU, D_5, PAU, E_5, PAU, FS5, PAU, FS5, FS5, E_5, PAU, D_5, PAU, FS5, PAU, FS6, PAU, B_5, PAU, FS5, PAU, G_5, PAU, A_5, PAU, B_5, PAU, FS5, PAU, B_5, PAU, B_5, PAU, CS6, PAU, D_6, PAU, E_6, PAU, CS6, PAU, A_5, PAU, E_5, PAU, E_5, PAU, FS5, PAU, A_5, PAU, G_5, PAU, FS5, PAU, E_5, PAU, FS5, PAU, B_4, PAU, B_4, PAU, B_4, PAU, AS4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, E_5, PAU, FS5, PAU, FS5, E_5, PAU, FS5, PAU, D_6, PAU, CS6, PAU, B_5, PAU, FS5, PAU, FS5, PAU, FS5, PAU, D_5, PAU, B_5, PAU, C_6, PAU, D_6, PAU, E_6, PAU, E_6, PAU, FS6, PAU, G_6, PAU, A_6, PAU, G_6, PAU, FS6, PAU, FS5, PAU, FS5, PAU, FS5, PAU, GS5, PAU, GS5, PAU, GS5, PAU, AS5, PAU, B_4, PAU, FS4, PAU, B_4, PAU, B_4, PAU, CS5, PAU, DS5, PAU, E_5, PAU, FS5, PAU, FS5, PAU, FS5, G_5, PAU, A_5, PAU, B_5, PAU, B_5, PAU, B_5, PAU, A_5, PAU, G_5, PAU, A_5, PAU, G_5, PAU, FS5, PAU, FS5, PAU, G_5, PAU, FS5, ENDSOUND,
  1, 240, 240, 120, 40, 120, 40, 120, 40, 240, 240, 120, 40, 120, 40, 120, 40, 240, 240, 120, 40, 120, 40, 120, 40, 240, 240, 120, 40, 120, 40, 120, 40, 960, 480, 120, 40, 120, 40, 120, 40, 960, 480, 160, 160, 160, 320, 160, 690, 150, 100, 20, 100, 20, 119, 1, 119, 1, 119, 1, 600, 680, 130, 30, 160, 159, 1, 159, 1, 800, 480, 140, 20, 140, 20, 159, 1, 159, 1, 150, 170, 159, 1, 490, 470, 140, 20, 159, 1, 159, 1, 120, 120, 110, 10, 119, 1, 570, 390, 180, 60, 160, 80, 120, 120, 120, 119, 1, 570, 390, 200, 40, 170, 70, 130, 110, 130, 119, 1, 670, 290, 380, 100, 170, 70, 80, 40, 60, 60, 140, 20, 140, 20, 140, 20, 540, 420, 370, 110, 620, 220, 90, 30, 130, 119, 1, 119, 1, 119, 1, 620, 660, 140, 20, 140, 20, 159, 1, 159, 1, 610, 670, 140, 20, 140, 20, 159, 1, 159, 6, 130, 185, 159, 1, 400, 560, 140, 20, 159, 1, 140, 20, 160, 80, 110, 10, 119, 1, 956, 4, 180, 60, 160, 80, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 160, 160, 160, 160, 159, 1, 159, 1, 956, 4, 956, 4, 1250, 190, 159, 1, 159, 1, 159, 1, 350, 130, 670, 170, 100, 20, 100, 20, 119, 1, 119, 1, 119, 1, 130, 190, 159, 1, 540, 180, 80, 40, 119, 1, 119, 1, 119, 1, 119, 1, 119, 1, 100, 220, 100, 60, 570, 150, 100, 20, 119, 1, 119, 1, 119, 1, 119, 1, 119, 1, 840, 600, 160, 159, 1, 159, 1, 130, 190, 148, 12, 390, 250, 130, 30, 130, 30, 130, 30, 159, 1, 159, 1, 170, 150, 148, 12, 370, 270, 150, 10, 159, 1, 159, 1, 159, 1, 159, 1, 1400, 749, 80, 51, 40, 20, 40, 20, 140, 20, 140, 20, 140, 20, 440, 520, 320, 160, 690, 150, 100, 20, 100, 20, 119, 1, 119, 1, 119, 1, 600, 680, 130, 30, 160, 159, 1, 159, 1, 800, 480, 140, 20, 140, 20, 159, 1, 159, 1, 150, 170, 159, 1, 490, 470, 140, 20, 159, 1, 159, 1, 120, 120, 110, 10, 119, 1, 570, 390, 180, 60, 160, 80, 120, 120, 120, 119, 1, 570, 390, 200, 40, 170, 70, 130, 110, 130, 119, 1, 670, 290, 380, 100, 170, 70, 80, 40, 60, 60, 140, 20, 140, 20, 140, 20, 540, 420, 370, 110, 620, 220, 90, 30, 130, 119, 1, 119, 1, 119, 1, 620, 660, 140, 20, 140, 20, 159, 1, 159, 1, 610, 670, 140, 20, 140, 20, 159, 1, 159, 6, 130, 185, 159, 1, 400, 560, 140, 20, 159, 1, 140, 20, 160, 80, 110, 10, 119, 1, 956, 4, 180, 60, 160, 80, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 160, 160, 160, 160, 159, 1, 159, 1, 956, 4, 956, 4, 1250, 190, 159, 1, 159, 1, 159, 1, 350, 130, 670, 170, 100, 20, 100, 20, 119, 1, 119, 1, 119, 1, 130, 190, 159, 1, 540, 180, 80, 40, 119, 1, 119, 1, 119, 1, 119, 1, 119, 1, 100, 220, 100, 60, 570, 150, 100, 20, 119, 1, 119, 1, 119, 1, 119, 1, 119, 1, 840, 600, 160, 159, 1, 159, 1, 130, 190, 148, 12, 390, 250, 130, 30, 130, 30, 130, 30, 159, 1, 159, 1, 170, 150, 148, 12, 370, 270, 150, 10, 159, 1, 159, 1, 159, 1, 159, 1, 1400, 749, 80, 51, 40, 20, 40, 20, 140, 20, 140, 20, 140, 20, 440, 520, 320, 160, 690, 150, 100, 20, 100, 20, 119, 1, 119, 1, 119, 1, 600, 680, 130, 30, 160, 159, 1, 159, 1, 800, 480, 140, 20, 140, 20, 159, 1, 159, 1, 150, 170, 159, 1, 490, 470, 140, 20, 159, 1, 159,
  11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11
};

// Instrument: square;
const u16 SampleThemeTrack2[] =
{
  PAU, DS4, PAU, DS4, PAU, DS4, PAU, DS4, PAU, CS4, PAU, CS4, PAU, DS4, PAU, E_4, PAU, G_4, PAU, G_4, PAU, G_4, PAU, G_4, PAU, A_4, PAU, A_4, PAU, A_4, PAU, A_4, PAU, B_4, PAU, A_4, PAU, A_4, PAU, A_4, PAU, B_4, PAU, DS4, PAU, E_4, PAU, DS4, PAU, CS4, PAU, DS4, PAU, DS4, PAU, DS4, E_4, PAU, FS4, PAU, GS4, PAU, A_4, PAU, B_4, PAU, B_4, PAU, CS5, PAU, DS5, PAU, E_5, PAU, FS5, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, G_4, PAU, G_4, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, D_5, D_5, CS5, PAU, B_4, PAU, D_5, PAU, A_4, PAU, A_4, PAU, A_4, PAU, G_4, PAU, A_4, PAU, A_4, PAU, A_4, PAU, G_4, PAU, A_4, PAU, G_4, PAU, G_4, PAU, FS4, PAU, G_4, PAU, G_4, PAU, A_4, PAU, B_4, PAU, A_4, PAU, G_4, PAU, FS4, PAU, FS4, E_4, PAU, FS4, PAU, FS4, PAU, G_4, PAU, A_4, PAU, G_4, PAU, FS4, PAU, F_4, PAU, F_4, PAU, F_4, FS4, PAU, GS4, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, E_5, PAU, CS5, PAU, E_4, PAU, E_4, PAU, E_4, PAU, FS4, PAU, DS4, PAU, E_4, PAU, DS4, PAU, CS4, PAU, DS4, PAU, DS4, PAU, DS4, PAU, E_4, PAU, FS4, PAU, GS4, PAU, A_4, PAU, B_4, B_4, CS5, DS5, PAU, E_5, FS5, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, G_4, PAU, G_4, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, D_5, PAU, D_5, PAU, CS5, PAU, B_4, PAU, D_5, PAU, A_4, PAU, A_4, PAU, A_4, PAU, G_4, PAU, A_4, PAU, A_4, A_4, G_4, PAU, A_4, PAU, G_4, PAU, G_4, FS4, PAU, G_4, PAU, G_4, PAU, A_4, PAU, B_4, PAU, A_4, PAU, G_4, PAU, FS4, PAU, F_4, PAU, FS4, PAU, AS4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, D_5, PAU, D_5, PAU, CS5, PAU, B_4, PAU, FS5, PAU, D_5, PAU, B_4, PAU, AS4, PAU, AS4, PAU, GS4, PAU, AS4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, E_5, PAU, D_5, PAU, CS5, PAU, D_5, PAU, D_5, PAU, B_4, PAU, B_4, PAU, D_5, PAU, D_5, PAU, E_5, PAU, FS5, PAU, G_5, PAU, E_5, PAU, D_5, PAU, CS5, PAU, A_4, PAU, B_4, PAU, FS4, PAU, FS4, PAU, E_4, PAU, GS4, PAU, B_4, PAU, B_4, PAU, AS4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, E_5, PAU, FS5, PAU, FS5, PAU, E_5, PAU, D_5, PAU, E_5, PAU, G_5, PAU, C_6, PAU, B_4, PAU, B_4, PAU, B_4, PAU, B_4, PAU, E_5, PAU, E_5, PAU, E_5, PAU, FS5, PAU, DS4, PAU, E_4, PAU, DS4, PAU, CS4, PAU, DS4, PAU, DS4, PAU, DS4, E_4, PAU, FS4, PAU, GS4, PAU, A_4, PAU, B_4, PAU, B_4, PAU, CS5, PAU, DS5, PAU, E_5, PAU, FS5, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, G_4, PAU, G_4, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, D_5, D_5, CS5, PAU, B_4, PAU, D_5, PAU, A_4, PAU, A_4, PAU, A_4, PAU, G_4, PAU, A_4, PAU, A_4, PAU, A_4, PAU, G_4, PAU, A_4, PAU, G_4, PAU, G_4, PAU, FS4, PAU, G_4, PAU, G_4, PAU, A_4, PAU, B_4, PAU, A_4, PAU, G_4, PAU, FS4, PAU, FS4, E_4, PAU, FS4, PAU, FS4, PAU, G_4, PAU, A_4, PAU, G_4, PAU, FS4, PAU, F_4, PAU, F_4, PAU, F_4, FS4, PAU, GS4, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, E_5, PAU, CS5, PAU, E_4, PAU, E_4, PAU, E_4, PAU, FS4, PAU, DS4, PAU, E_4, PAU, DS4, PAU, CS4, PAU, DS4, PAU, DS4, PAU, DS4, PAU, E_4, PAU, FS4, PAU, GS4, PAU, A_4, PAU, B_4, B_4, CS5, DS5, PAU, E_5, FS5, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, G_4, PAU, G_4, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, D_5, PAU, D_5, PAU, CS5, PAU, B_4, PAU, D_5, PAU, A_4, PAU, A_4, PAU, A_4, PAU, G_4, PAU, A_4, PAU, A_4, A_4, G_4, PAU, A_4, PAU, G_4, PAU, G_4, FS4, PAU, G_4, PAU, G_4, PAU, A_4, PAU, B_4, PAU, A_4, PAU, G_4, PAU, FS4, PAU, F_4, PAU, FS4, PAU, AS4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, D_5, PAU, D_5, PAU, CS5, PAU, B_4, PAU, FS5, PAU, D_5, PAU, B_4, PAU, AS4, PAU, AS4, PAU, GS4, PAU, AS4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, E_5, PAU, D_5, PAU, CS5, PAU, D_5, PAU, D_5, PAU, B_4, PAU, B_4, PAU, D_5, PAU, D_5, PAU, E_5, PAU, FS5, PAU, G_5, PAU, E_5, PAU, D_5, PAU, CS5, PAU, A_4, PAU, B_4, PAU, FS4, PAU, FS4, PAU, E_4, PAU, GS4, PAU, B_4, PAU, B_4, PAU, AS4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, E_5, PAU, FS5, PAU, FS5, PAU, E_5, PAU, D_5, PAU, E_5, PAU, G_5, PAU, C_6, PAU, B_4, PAU, B_4, PAU, B_4, PAU, B_4, PAU, E_5, PAU, E_5, PAU, E_5, PAU, FS5, PAU, DS4, PAU, E_4, PAU, DS4, PAU, CS4, PAU, DS4, PAU, DS4, PAU, DS4, E_4, PAU, FS4, PAU, GS4, PAU, A_4, PAU, B_4, PAU, B_4, PAU, CS5, PAU, DS5, PAU, E_5, PAU, FS5, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, G_4, PAU, G_4, PAU, A_4, PAU, B_4, PAU, CS5, PAU, D_5, PAU, D_5, D_5, CS5, PAU, B_4, PAU, D_5, PAU, A_4, PAU, A_4, PAU, A_4, PAU, G_4, PAU, A_4, PAU, A_4, PAU, A_4, PAU, G_4, PAU, A_4, ENDSOUND,
  1, 240, 240, 120, 40, 120, 40, 120, 40, 240, 240, 120, 40, 120, 40, 120, 40, 240, 240, 120, 40, 120, 40, 120, 40, 240, 240, 120, 40, 120, 40, 120, 40, 960, 480, 120, 40, 120, 40, 120, 40, 960, 960, 320, 160, 148, 12, 159, 1, 159, 1, 260, 60, 120, 40, 120, 119, 1, 119, 1, 119, 1, 200, 160, 90, 30, 90, 30, 119, 1, 119, 1, 119, 1, 478, 2, 159, 1, 159, 1, 159, 1, 240, 120, 80, 40, 80, 40, 119, 1, 119, 1, 119, 1, 160, 160, 160, 160, 159, 1, 159, 1, 140, 180, 150, 10, 150, 10, 150, 10, 159, 1, 140, 180, 140, 20, 140, 20, 159, 1, 159, 1, 140, 100, 100, 20, 119, 1, 140, 100, 100, 20, 119, 1, 330, 150, 150, 90, 180, 60, 120, 120, 120, 119, 1, 90, 150, 90, 30, 119, 1, 340, 140, 180, 60, 190, 50, 300, 180, 120, 120, 120, 119, 1, 290, 70, 119, 1, 119, 1, 119, 1, 119, 1, 119, 1, 478, 2, 140, 20, 140, 20, 140, 20, 510, 450, 320, 160, 159, 1, 159, 1, 159, 1, 160, 200, 80, 40, 80, 40, 119, 1, 119, 1, 119, 1, 358, 2, 120, 120, 130, 119, 1, 130, 390, 90, 159, 1, 159, 1, 159, 1, 300, 60, 90, 30, 90, 30, 119, 1, 119, 1, 119, 1, 210, 110, 150, 10, 150, 10, 159, 1, 159, 1, 180, 140, 150, 10, 150, 10, 150, 10, 159, 1, 160, 160, 160, 160, 159, 1, 159, 1, 120, 120, 120, 119, 1, 110, 130, 110, 10, 119, 1, 390, 90, 180, 60, 190, 50, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 160, 160, 150, 10, 150, 10, 159, 1, 159, 1, 270, 50, 300, 100, 239, 1, 340, 140, 130, 30, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 560, 400, 420, 60, 420, 69, 298, 53, 100, 20, 100, 20, 119, 1, 119, 1, 119, 1, 120, 200, 159, 1, 740, 220, 360, 125, 250, 65, 110, 50, 390, 90, 320, 160, 340, 140, 140, 100, 100, 20, 119, 1, 119, 1, 119, 1, 119, 1, 119, 1, 730, 230, 140, 180, 148, 12, 690, 750, 170, 150, 148, 12, 890, 1030, 110, 50, 110, 50, 110, 50, 380, 1060, 120, 40, 120, 40, 120, 40, 390, 570, 320, 160, 148, 12, 159, 1, 159, 1, 260, 60, 120, 40, 120, 119, 1, 119, 1, 119, 1, 200, 160, 90, 30, 90, 30, 119, 1, 119, 1, 119, 1, 478, 2, 159, 1, 159, 1, 159, 1, 240, 120, 80, 40, 80, 40, 119, 1, 119, 1, 119, 1, 160, 160, 160, 160, 159, 1, 159, 1, 140, 180, 150, 10, 150, 10, 150, 10, 159, 1, 140, 180, 140, 20, 140, 20, 159, 1, 159, 1, 140, 100, 100, 20, 119, 1, 140, 100, 100, 20, 119, 1, 330, 150, 150, 90, 180, 60, 120, 120, 120, 119, 1, 90, 150, 90, 30, 119, 1, 340, 140, 180, 60, 190, 50, 300, 180, 120, 120, 120, 119, 1, 290, 70, 119, 1, 119, 1, 119, 1, 119, 1, 119, 1, 478, 2, 140, 20, 140, 20, 140, 20, 510, 450, 320, 160, 159, 1, 159, 1, 159, 1, 160, 200, 80, 40, 80, 40, 119, 1, 119, 1, 119, 1, 358, 2, 120, 120, 130, 119, 1, 130, 390, 90, 159, 1, 159, 1, 159, 1, 300, 60, 90, 30, 90, 30, 119, 1, 119, 1, 119, 1, 210, 110, 150, 10, 150, 10, 159, 1, 159, 1, 180, 140, 150, 10, 150, 10, 150, 10, 159, 1, 160, 160, 160, 160, 159, 1, 159, 1, 120, 120, 120, 119, 1, 110, 130, 110, 10, 119, 1, 390, 90, 180, 60, 190, 50, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 160, 160, 150, 10, 150, 10, 159, 1, 159, 1, 270, 50, 300, 100, 239, 1, 340, 140, 130, 30, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 560, 400, 420, 60, 420, 69, 298, 53, 100, 20, 100, 20, 119, 1, 119, 1, 119, 1, 120, 200, 159, 1, 740, 220, 360, 125, 250, 65, 110, 50, 390, 90, 320, 160, 340, 140, 140, 100, 100, 20, 119, 1, 119, 1, 119, 1, 119, 1, 119, 1, 730, 230, 140, 180, 148, 12, 690, 750, 170, 150, 148, 12, 890, 1030, 110, 50, 110, 50, 110, 50, 380, 1060, 120, 40, 120, 40, 120, 40, 390, 570, 320, 160, 148, 12, 159, 1, 159, 1, 260, 60, 120, 40, 120, 119, 1, 119, 1, 119, 1, 200, 160, 90, 30, 90, 30, 119, 1, 119, 1, 119, 1, 478, 2, 159, 1, 159, 1, 159, 1, 240, 120, 80, 40, 80, 40, 119, 1, 119, 1, 119, 1, 160, 160, 160, 160, 159, 1, 159, 1, 140, 180, 150, 10, 150, 10, 150, 10, 159, 1, 140, 180, 140, 20, 140, 20, 159, 1, 159,
  11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11
};

// Instrument: square;
const u16 SampleThemeTrack3[] =
{
  PAU, B_3, PAU, B_3, B_3, B_3, A_3, PAU, A_3, A_3, A_3, G_3, PAU, G_3, G_3, G_3, A_3, A_3, A_3, A_3, G_3, A_3, B_3, PAU, B_3, B_3, B_3, B_3, PAU, FS3, FS3, FS3, B_3, PAU, B_3, B_3, B_3, B_3, PAU, FS3, FS3, FS3, B_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, A_2, PAU, A_2, PAU, G_2, PAU, A_2, PAU, A_2, PAU, G_2, PAU, G_2, PAU, G_2, PAU, FS2, PAU, G_2, PAU, G_2, PAU, D_3, PAU, D_3, PAU, D_3, PAU, C_3, PAU, D_3, PAU, D_3, PAU, C_3, PAU, C_3, PAU, C_3, PAU, B_2, PAU, C_3, PAU, C_3, PAU, B_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, B_2, PAU, B_2, PAU, CS3, PAU, CS3, PAU, CS3, PAU, CS3, PAU, CS3, PAU, CS3, PAU, CS3, PAU, CS3, PAU, FS3, PAU, B_3, PAU, B_3, PAU, B_3, PAU, CS4, GS2, PAU, AS2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, A_2, PAU, A_2, PAU, G_2, A_2, PAU, A_2, PAU, G_2, PAU, G_2, PAU, G_2, PAU, FS2, PAU, G_2, PAU, G_2, PAU, D_3, PAU, D_3, PAU, D_3, PAU, C_3, D_3, PAU, D_3, PAU, C_3, PAU, C_4, PAU, C_4, PAU, B_3, PAU, C_4, PAU, C_4, PAU, C_4, PAU, C_4, PAU, B_3, AS3, PAU, A_3, PAU, GS3, E_3, PAU, FS3, PAU, FS3, PAU, FS4, PAU, E_4, PAU, D_4, PAU, CS4, PAU, B_3, PAU, CS4, PAU, B_3, PAU, G_2, PAU, G_3, PAU, B_3, PAU, D_4, PAU, G_4, PAU, G_2, PAU, G_2, PAU, G_2, PAU, FS2, PAU, FS3, PAU, A_3, PAU, CS4, FS4, PAU, FS3, PAU, FS3, PAU, FS3, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, G_2, PAU, G_2, PAU, B_2, PAU, D_3, PAU, G_3, PAU, G_2, PAU, G_2, PAU, G_2, PAU, C_3, PAU, C_3, PAU, E_3, PAU, G_3, PAU, C_4, PAU, C_3, PAU, C_3, PAU, C_3, PAU, FS2, PAU, E_4, PAU, E_4, PAU, E_4, PAU, E_4, PAU, FS2, FS2, FS2, FS2, PAU, B_4, PAU, B_4, PAU, B_4, PAU, CS5, PAU, G_3, PAU, FS3, PAU, E_3, PAU, D_3, PAU, CS3, PAU, B_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, A_2, PAU, A_2, PAU, G_2, PAU, A_2, PAU, A_2, PAU, G_2, PAU, G_2, PAU, G_2, PAU, FS2, PAU, G_2, PAU, G_2, PAU, D_3, PAU, D_3, PAU, D_3, PAU, C_3, PAU, D_3, PAU, D_3, PAU, C_3, PAU, C_3, PAU, C_3, PAU, B_2, PAU, C_3, PAU, C_3, PAU, B_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, B_2, PAU, B_2, PAU, CS3, PAU, CS3, PAU, CS3, PAU, CS3, PAU, CS3, PAU, CS3, PAU, CS3, PAU, CS3, PAU, FS3, PAU, B_3, PAU, B_3, PAU, B_3, PAU, CS4, GS2, PAU, AS2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, A_2, PAU, A_2, PAU, G_2, A_2, PAU, A_2, PAU, G_2, PAU, G_2, PAU, G_2, PAU, FS2, PAU, G_2, PAU, G_2, PAU, D_3, PAU, D_3, PAU, D_3, PAU, C_3, D_3, PAU, D_3, PAU, C_3, PAU, C_4, PAU, C_4, PAU, B_3, PAU, C_4, PAU, C_4, PAU, C_4, PAU, C_4, PAU, B_3, AS3, PAU, A_3, PAU, GS3, E_3, PAU, FS3, PAU, FS3, PAU, FS4, PAU, E_4, PAU, D_4, PAU, CS4, PAU, B_3, PAU, CS4, PAU, B_3, PAU, G_2, PAU, G_3, PAU, B_3, PAU, D_4, PAU, G_4, PAU, G_2, PAU, G_2, PAU, G_2, PAU, FS2, PAU, FS3, PAU, A_3, PAU, CS4, FS4, PAU, FS3, PAU, FS3, PAU, FS3, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, G_2, PAU, G_2, PAU, B_2, PAU, D_3, PAU, G_3, PAU, G_2, PAU, G_2, PAU, G_2, PAU, C_3, PAU, C_3, PAU, E_3, PAU, G_3, PAU, C_4, PAU, C_3, PAU, C_3, PAU, C_3, PAU, FS2, PAU, E_4, PAU, E_4, PAU, E_4, PAU, E_4, PAU, FS2, FS2, FS2, FS2, PAU, B_4, PAU, B_4, PAU, B_4, PAU, CS5, PAU, G_3, PAU, FS3, PAU, E_3, PAU, D_3, PAU, CS3, PAU, B_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, B_2, PAU, B_2, PAU, A_2, PAU, A_2, PAU, A_2, PAU, G_2, PAU, A_2, PAU, A_2, PAU, G_2, PAU, G_2, PAU, G_2, PAU, FS2, PAU, G_2, PAU, G_2, PAU, D_3, PAU, D_3, PAU, D_3, PAU, C_3, PAU, D_3, PAU, D_3, PAU, ENDSOUND,
  1, 160, 320, 160, 160, 160, 160, 320, 160, 160, 160, 160, 320, 160, 160, 160, 160, 160, 160, 160, 160, 160, 160, 320, 160, 160, 160, 160, 320, 160, 160, 160, 160, 320, 160, 160, 160, 160, 320, 160, 160, 160, 120, 360, 120, 40, 120, 40, 148, 12, 140, 340, 140, 340, 150, 330, 150, 10, 150, 10, 120, 40, 110, 370, 110, 370, 100, 380, 100, 60, 100, 60, 148, 12, 140, 340, 140, 340, 130, 350, 130, 30, 130, 30, 159, 1, 120, 360, 120, 360, 130, 350, 130, 30, 130, 30, 159, 1, 120, 360, 120, 360, 150, 330, 150, 10, 150, 10, 148, 12, 110, 370, 110, 370, 120, 360, 120, 40, 120, 40, 120, 40, 120, 360, 120, 40, 120, 40, 120, 40, 120, 360, 140, 20, 140, 20, 140, 20, 488, 228, 12, 239, 1, 150, 330, 130, 30, 130, 30, 148, 12, 130, 350, 130, 350, 150, 330, 150, 10, 150, 10, 169, 140, 340, 140, 340, 170, 310, 110, 50, 110, 50, 148, 12, 150, 330, 150, 338, 120, 352, 120, 40, 120, 40, 169, 140, 340, 140, 340, 190, 290, 120, 40, 120, 40, 148, 12, 140, 340, 140, 20, 140, 20, 140, 20, 488, 467, 13, 956, 4, 488, 467, 13, 140, 340, 140, 20, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 140, 340, 210, 750, 130, 350, 148, 12, 159, 1, 159, 1, 190, 290, 140, 20, 140, 20, 140, 20, 120, 360, 159, 1, 159, 1, 169, 160, 320, 130, 30, 130, 30, 130, 30, 120, 360, 120, 40, 130, 30, 110, 50, 120, 360, 120, 40, 120, 40, 120, 40, 120, 360, 120, 40, 120, 40, 120, 40, 120, 360, 120, 200, 150, 10, 130, 350, 130, 30, 148, 12, 159, 1, 170, 310, 110, 50, 110, 50, 110, 50, 140, 340, 140, 20, 148, 12, 159, 1, 160, 320, 130, 30, 100, 60, 100, 60, 130, 350, 150, 10, 150, 10, 150, 10, 150, 330, 160, 160, 160, 160, 320, 120, 40, 120, 40, 120, 40, 140, 20, 148, 12, 159, 1, 159, 1, 159, 1, 159, 1, 120, 360, 120, 40, 120, 40, 148, 12, 140, 340, 140, 340, 150, 330, 150, 10, 150, 10, 120, 40, 110, 370, 110, 370, 100, 380, 100, 60, 100, 60, 148, 12, 140, 340, 140, 340, 130, 350, 130, 30, 130, 30, 159, 1, 120, 360, 120, 360, 130, 350, 130, 30, 130, 30, 159, 1, 120, 360, 120, 360, 150, 330, 150, 10, 150, 10, 148, 12, 110, 370, 110, 370, 120, 360, 120, 40, 120, 40, 120, 40, 120, 360, 120, 40, 120, 40, 120, 40, 120, 360, 140, 20, 140, 20, 140, 20, 488, 228, 12, 239, 1, 150, 330, 130, 30, 130, 30, 148, 12, 130, 350, 130, 350, 150, 330, 150, 10, 150, 10, 169, 140, 340, 140, 340, 170, 310, 110, 50, 110, 50, 148, 12, 150, 330, 150, 338, 120, 352, 120, 40, 120, 40, 169, 140, 340, 140, 340, 190, 290, 120, 40, 120, 40, 148, 12, 140, 340, 140, 20, 140, 20, 140, 20, 488, 467, 13, 956, 4, 488, 467, 13, 140, 340, 140, 20, 159, 1, 159, 1, 159, 1, 159, 1, 159, 1, 140, 340, 210, 750, 130, 350, 148, 12, 159, 1, 159, 1, 190, 290, 140, 20, 140, 20, 140, 20, 120, 360, 159, 1, 159, 1, 169, 160, 320, 130, 30, 130, 30, 130, 30, 120, 360, 120, 40, 130, 30, 110, 50, 120, 360, 120, 40, 120, 40, 120, 40, 120, 360, 120, 40, 120, 40, 120, 40, 120, 360, 120, 200, 150, 10, 130, 350, 130, 30, 148, 12, 159, 1, 170, 310, 110, 50, 110, 50, 110, 50, 140, 340, 140, 20, 148, 12, 159, 1, 160, 320, 130, 30, 100, 60, 100, 60, 130, 350, 150, 10, 150, 10, 150, 10, 150, 330, 160, 160, 160, 160, 320, 120, 40, 120, 40, 120, 40, 140, 20, 148, 12, 159, 1, 159, 1, 159, 1, 159, 1, 120, 360, 120, 40, 120, 40, 148, 12, 140, 340, 140, 340, 150, 330, 150, 10, 150, 10, 120, 40, 110, 370, 110, 370, 100, 380, 100, 60, 100, 60, 148, 12, 140, 340, 140, 340, 130, 350, 130, 30, 130, 30, 159, 1, 120, 360, 120, 359,
  11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11
};

