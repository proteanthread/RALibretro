/*
Copyright (C) 2018 Andre Leiradella

This file is part of RALibretro.

RALibretro is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

RALibretro is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Emulator.h"

const char* getEmulatorName(Emulator emulator)
{
  switch (emulator)
  {
  case Emulator::kNone:          break;
  case Emulator::kStella:        return "Stella";
  case Emulator::kSnes9x:        return "Snes9x";
  case Emulator::kPicoDrive:     return "PicoDrive";
  case Emulator::kGenesisPlusGx: return "Genesis Plus GX";
  case Emulator::kFceumm:        return "FCEUmm";
  case Emulator::kHandy:         return "Handy";
  case Emulator::kBeetleSgx:     return "Beetle SGX";
  case Emulator::kGambatte:      return "Gambatte";
  case Emulator::kMGBA:          return "mGBA";
  case Emulator::kMednafenPsx:   return "Mednafen PSX";
  case Emulator::kMednafenNgp:   return "Mednafen NGP";
  case Emulator::kMednafenVb:    return "Mednafen VB";
  case Emulator::kFBAlpha:       return "Final Burn Alpha";
  case Emulator::kProSystem:     return "ProSystem";
  case Emulator::kFreeIntv:      return "FreeIntv";
  default:                       break;
  }
  
  return "?";
}

const char* getEmulatorFileName(Emulator emulator)
{
  switch (emulator)
  {
  case Emulator::kNone:          break;
  case Emulator::kStella:        return "stella_libretro";
  case Emulator::kSnes9x:        return "snes9x_libretro";
  case Emulator::kPicoDrive:     return "picodrive_libretro";
  case Emulator::kGenesisPlusGx: return "genesis_plus_gx_libretro";
  case Emulator::kFceumm:        return "fceumm_libretro";
  case Emulator::kHandy:         return "handy_libretro";
  case Emulator::kBeetleSgx:     return "mednafen_supergrafx_libretro";
  case Emulator::kGambatte:      return "gambatte_libretro";
  case Emulator::kMGBA:          return "mgba_libretro";
  case Emulator::kMednafenPsx:   return "mednafen_psx_libretro";
  case Emulator::kMednafenNgp:   return "mednafen_ngp_libretro";
  case Emulator::kMednafenVb:    return "mednafen_vb_libretro";
  case Emulator::kFBAlpha:       return "fbalpha_libretro";
  case Emulator::kProSystem:     return "prosystem_libretro";
  case Emulator::kFreeIntv:      return "freeintv_libretro";
  default:                       break;
  }
  
  return "?";
}

const char* getEmulatorExtensions(Emulator emulator)
{
#define EXTPREFIX "All Files\0*.*\0Supported Files\0"

  switch (emulator)
  {
  case Emulator::kNone:          break;
  case Emulator::kStella:        return EXTPREFIX "*.A26;*.BIN\0";                            // a26|bin
  case Emulator::kSnes9x:        return EXTPREFIX "*.SMC;*.SFC;*.SWC;*.FIG\0";                // smc|sfc|swc|fig
  case Emulator::kPicoDrive:     return EXTPREFIX "*.BIN;*.GEN;*.SMD;*.MD;*.SMS\0";           // bin|gen|smd|md|32x|cue|iso|sms
  case Emulator::kGenesisPlusGx: return EXTPREFIX "*.BIN;*.GEN;*.SMD;*.MD;*.SMS;*.GG;*.SG\0"; // mdx|md|smd|gen|bin|cue|iso|chd|sms|gg|sg
  case Emulator::kFceumm:        return EXTPREFIX "*.FDS;*.NES;*.UNF;*.UNIF\0";               // fds|nes|unf|unif
  case Emulator::kHandy:         return EXTPREFIX "*.LNX\0";                                  // lnx
  case Emulator::kBeetleSgx:     return EXTPREFIX "*.PCE;*.SGX;*.CUE;*.CCD;*.CHD\0";          // pce|sgx|cue|ccd|chd
  case Emulator::kGambatte:      return EXTPREFIX "*.GB;*.GBC;*.DMG\0";                       // gb|gbc|dmg
  case Emulator::kMGBA:          return EXTPREFIX "*.GBA\0";                                  // gba|gb|gbc
  case Emulator::kMednafenPsx:   return EXTPREFIX "*.*\0";
  case Emulator::kMednafenNgp:   return EXTPREFIX "*.NGP;*.NGC;*.NGPC\0";                     // ngp|ngc|ngpc
  case Emulator::kMednafenVb:    return EXTPREFIX "*.VB;*.VBOY;*.BIN\0";                      // vb|vboy|bin
  case Emulator::kFBAlpha:       return EXTPREFIX "*.ZIP\0";                                  // iso|zip|7z
  case Emulator::kProSystem:     return EXTPREFIX "*.A78\0";                                  // a78
  case Emulator::kFreeIntv:      return EXTPREFIX "*.INT;*.BIN;*.ROM\0";                      // int|bin|rom
  default:                       break;
  }
  
  return "?";

#undef EXTPREFIX
}

const char* getSystemName(System system)
{
  switch (system)
  {
  case System::kAtari2600:      return "Atari 2600";
  case System::kAtariLynx:      return "Atari Lynx";
  case System::kMasterSystem:   return "Master System";
  case System::kMegaDrive:      return "Sega Genesis";
  case System::kNintendo:       return "Nintendo Entertainment System";
  case System::kPCEngine:       return "TurboGrafx-16";
  case System::kSuperNintendo:  return "Super Nintendo Entertainment System";
  case System::kGameBoy:        return "Game Boy";
  case System::kGameBoyColor:   return "Game Boy Color";
  case System::kGameBoyAdvance: return "Game Boy Advance";
  case System::kPlayStation1:   return "PlayStation";
  case System::kNeoGeoPocket:   return "Neo Geo Pocket";
  case System::kVirtualBoy:     return "Virtual Boy";
  case System::kGameGear:       return "Game Gear";
  case System::kArcade:         return "Arcade";
  case System::kAtari7800:      return "Atari 7800";
  case System::kIntellivision:  return "Intellivision";
  default:                      break;
  }
  
  return "?";
}

System getSystem(Emulator emulator, const std::string game_path, libretro::Core* core)
{
  switch (emulator)
  {
  case Emulator::kNone:        return System::kNone;
  case Emulator::kStella:      return System::kAtari2600;
  case Emulator::kSnes9x:      return System::kSuperNintendo;
  case Emulator::kFceumm:      return System::kNintendo;
  case Emulator::kHandy:       return System::kAtariLynx;
  case Emulator::kBeetleSgx:   return System::kPCEngine;
  case Emulator::kMednafenPsx: return System::kPlayStation1;
  case Emulator::kMednafenNgp: return System::kNeoGeoPocket;
  case Emulator::kMednafenVb:  return System::kVirtualBoy;
  case Emulator::kFBAlpha:     return System::kArcade;
  case Emulator::kProSystem:   return System::kAtari7800;
  case Emulator::kFreeIntv:    return System::kIntellivision;

  case Emulator::kPicoDrive:
  case Emulator::kGenesisPlusGx:
    if (core->getMemorySize(RETRO_MEMORY_SYSTEM_RAM) == 0x2000)
    {
      if (game_path.substr(game_path.length() - 3) == ".gg")
      {
        return System::kGameGear;
      }
      else
      {
        return System::kMasterSystem;
      }
    }
    else
    {
      return System::kMegaDrive;
    }

  case Emulator::kGambatte:
  case Emulator::kMGBA:
    if (game_path.substr(game_path.length() - 4) == ".gbc")
    {
      return System::kGameBoyColor;
    }
    else if (game_path.substr(game_path.length() - 4) == ".gba")
    {
      // Gambatte doesn't support GBA, but it won't be a problem to test it here
      return System::kGameBoyAdvance;
    }
    else
    {
      return System::kGameBoy;
    }
  
  default:
    break;
  }


  return System::kNone;
}

static bool romLoadedWithPadding(void* rom, size_t size, size_t max_size, int fill)
{
  uint8_t* data = (uint8_t*)malloc(max_size);

  if (data != NULL)
  {
    if (size < max_size)
    {
      memcpy(data, rom, size);
      memset(data + size, fill, max_size - size);
    }
    else
    {
      memcpy(data, rom, max_size);
    }

    RA_OnLoadNewRom(data, max_size);
    free(data);
    return true;
  }

  return false;
}

static bool romLoadedNes(void* rom, size_t size)
{
  // if the file contains a header, ignore it
  uint8_t* raw = (uint8_t*)rom;
  if (raw[0] == 'N' && raw[1] == 'E' && raw[2] == 'S' && raw[3] == 0x1A)
  {
    if (raw[7] & 1) // PlayChoice-10 - 8KB of hint screen data after CHR data
      size -= 8192;

    if (raw[6] & 4) // 512-bytes of trainer data before PRG data
    {
      raw += 512;
      size -= 512;
    }

    raw += 16;
    size -= 16;
  }

  RA_OnLoadNewRom(raw, size);
  return true;
}

static bool romLoadPsx(const std::string& path)
{
  std::string name = util::fileName(path);
  RA_OnLoadNewRom((BYTE*)name.c_str(), name.length());
  return true;
}

static bool romLoadArcade(const std::string& path)
{
  std::string name = util::fileName(path);
  RA_OnLoadNewRom((BYTE*)name.c_str(), name.length());
  return true;
}

bool romLoaded(Logger* logger, System system, const std::string& path, void* rom, size_t size)
{
  bool ok = false;

  switch (system)
  {
  case System::kAtari2600:
  case System::kPCEngine:
  case System::kGameBoy:
  case System::kGameBoyColor:
  case System::kGameBoyAdvance:
  case System::kNeoGeoPocket:
  case System::kMasterSystem:
  case System::kMegaDrive:
  case System::kSuperNintendo:
  case System::kAtari7800:
  case System::kIntellivision:
  default:
    rom = util::loadFile(logger, path, &size);
    RA_OnLoadNewRom((BYTE*)rom, size);
    free(rom);
    ok = true;
    break;

  case System::kNintendo:
    ok = romLoadedNes(rom, size);
    break;
  
  case System::kAtariLynx:
    rom = util::loadFile(logger, path, &size);
    RA_OnLoadNewRom((BYTE*)rom + 0x0040, size > 0x0240 ? 0x0200 : size - 0x0040);
    free(rom);
    ok = true;
    break;
  
  case System::kPlayStation1:
    ok = romLoadPsx(path);
    break;
  
  case System::kArcade:
    ok = romLoadArcade(path);
    break;
  }

  return ok;
}
