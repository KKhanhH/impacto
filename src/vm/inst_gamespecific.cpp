#include "inst_gamespecific.h"

#include "inst_macros.inc"

#include "expression.h"
#include "../log.h"
#include "../mem.h"
#include "../profile/scriptvars.h"
#include "../hud/delusiontrigger.h"
#include "../ui/mapsystem.h"

namespace Impacto {

namespace Vm {

using namespace Impacto::Profile::ScriptVars;

VmInstruction(InstUnk0041) {
  StartInstruction;
  ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Unk0041()\n");
}
VmInstruction(InstUnk0052) {
  StartInstruction;
  PopExpression(arg1);
  ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Unk0052(arg1: %i)\n",
             arg1);
}
VmInstruction(InstUnk0053) {
  StartInstruction;
  PopExpression(arg1);
  PopExpression(arg2);
  ImpLogSlow(LL_Warning, LC_VMStub,
             "STUB instruction Unk0053(arg1: %i, arg2: %i)\n", arg1, arg2);
}
VmInstruction(InstUnk0054) {
  StartInstruction;
  PopExpression(arg1);
  PopExpression(arg2);
  ImpLogSlow(LL_Warning, LC_VMStub,
             "STUB instruction Unk0054(arg1: %i, arg2: %i)\n", arg1, arg2);
}
VmInstruction(InstUnk005F) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0: {
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Unk005F(type: %i)\n",
                 type);
    } break;
    case 1: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Unk005F(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 2: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Unk005F(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 3: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Unk012FMO8(type: %i)\n", type);
    } break;
  }

  ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Unk005F(type: %i)\n",
             type);
}
VmInstruction(InstUnk011F) {
  StartInstruction;
  ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Unk011F()\n");
}
VmInstruction(InstUnk012D) {
  StartInstruction;
  ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Unk012D()\n");
}
VmInstruction(InstUnk1035CHLCC) {
  StartInstruction;
  ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction InstUnk1035CHLCC()\n");
}
VmInstruction(InstRINNS) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0: {  // RINNSInit
      PopUint16(arg1);
      PopUint8(arg2);
      PopExpression(arg3);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction RINNSInit(arg1: %i, arg2: %i, "
                 "arg3: %i)\n",
                 arg1, arg2, arg3);
    } break;
    case 0x81: {  // RINNSAddID
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction RINNSAddID(arg1: %i, arg2: %i)\n", arg1,
                 arg2);
    } break;
    case 0x91: {  // RINNSTimeupLogID
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction RINNSTimeupLogID(arg1: %i, arg2: %i)\n",
                 arg1);
    } break;
  }
}
VmInstruction(InstRINNSMain) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction RINNSMain(type: %i)\n", type);
    } break;
    case 1: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction RINNSMain(type: %i)\n", type);
    } break;
    case 2: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction RINNSMain(type: %i, arg1: %i)\n", type,
                 arg1);
    } break;
  }
}
VmInstruction(InstChatMO8) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0: {  // ChatInit
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction ChatMO8(type: %i)\n",
                 type);
    } break;
    case 1: {  // ChatAdd
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopUint8(arg5);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction ChatMO8(type: %i, arg1: %i, arg2: %i, "
                 "arg3: %i, arg4: %i, arg5: %i)\n",
                 type, arg1, arg2, arg3, arg4, arg5);
    } break;
    case 2: {
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction ChatMO8(type: %i)\n",
                 type);
    } break;
    case 3: {
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction ChatMO8(type: %i)\n",
                 type);
    } break;
    case 4: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction ChatMO8(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 5: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction ChatMO8(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 6: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopExpression(arg5);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction ChatMO8(type: %i, arg1: %i, arg2: %i, "
                 "arg3: %i, arg4: %i, arg5: %i)\n",
                 type, arg1, arg2, arg3, arg4, arg5);
    } break;
  }
}
VmInstruction(InstGeotag) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0: {
      PopLocalLabel(label1);
      (void)label1;
      PopLocalLabel(label2);
      (void)label2;
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Geotag(type: %i)\n",
                 type);
    } break;
    case 1: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i, arg2: %i)\n",
                 type, arg1, arg2);
    } break;
    case 2: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i, arg2: %i)\n",
                 type, arg1, arg2);
    } break;
    case 3: {
      PopExpression(arg1);
      PopLocalLabel(label1);
      (void)label1;
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 4: {
      PopExpression(arg1);
      PopLocalLabel(label1);
      (void)label1;
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 5: {
      PopExpression(arg1);
      PopLocalLabel(label1);
      (void)label1;
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 6: {
      PopExpression(arg1);
      PopLocalLabel(label1);
      (void)label1;
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 7: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i, arg2: %i)\n",
                 type, arg1, arg2);
    } break;
    case 8: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i, arg2: %i)\n",
                 type, arg1, arg2);
    } break;
    case 9: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i, arg2: %i)\n",
                 type, arg1, arg2);
    } break;
    case 10: {
      for (int i = 0; i < 8; i++) {
        if (ScrWork[SW_CHA1EX + 30 * i] == 0)
          SetFlag(SF_MDL1SHDISP + i, 1);
        else {
          if (GetFlag(SF_AR_SETUP_ADD_MDLBUF1 + i))
            SetFlag(SF_MDL1SHDISP + i, 1);
          else
            SetFlag(SF_MDL1SHDISP + i, 0);
        }
      }
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Geotag(type: %i)\n",
                 type);
    } break;
    case 11: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopExpression(arg5);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i, arg2: %i, arg3: "
                 "%i, arg4: %i, arg5: %i)\n",
                 type, arg1, arg2, arg3, arg4, arg5);
    } break;
    case 12: {
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Geotag(type: %i)\n",
                 type);
    } break;
    case 13: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 14: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i, arg2: %i)\n",
                 type, arg1, arg2);
    } break;
    case 15: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i, arg2: %i, arg3: "
                 "%i, arg4: %i)\n",
                 type, arg1, arg2, arg3, arg4);
    } break;
    case 20: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopExpression(arg5);
      PopExpression(arg6);
      PopExpression(arg7);
      PopExpression(arg8);
      PopExpression(arg9);
      PopExpression(arg10);
      PopExpression(arg11);
      PopExpression(arg12);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Geotag(type: %i, arg1: %i, arg2: %i, arg3: "
                 "%i, arg4: %i, arg5: %i, arg6: %i, arg7: %i, arg8: %i, arg9: "
                 "%i, arg10: %i, arg11: %i, arg12: %i)\n",
                 type, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9,
                 arg10, arg11, arg12);
    } break;
    case 21: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
    } break;
    case 22: {
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Geotag(type: %i)\n",
                 type);
    } break;
  }
}
VmInstruction(InstUnk100FMO6) {
  StartInstruction;
  PopUint8(type);
  PopExpression(arg1);
  PopExpression(arg2);
  PopExpression(arg3);
  ImpLogSlow(LL_Warning, LC_VMStub,
             "STUB instruction Unk100FMO6(type: %i, arg1: %i, arg2: %i, arg3: "
             "%i)\n",
             type, arg1, arg2, arg3);
}
VmInstruction(InstUnk1010MO6) {
  StartInstruction;
  PopUint8(type);
  PopExpression(arg1);
  PopExpression(arg2);
  ImpLogSlow(LL_Warning, LC_VMStub,
             "STUB instruction Unk100FMO6(type: %i, arg1: %i, arg2: %i)\n",
             type, arg1, arg2);
}
VmInstruction(InstUnk1011MO6) {
  StartInstruction;
  PopUint8(type);
  PopUint8(type2);
  if (type2 != 2) {
    PopExpression(arg1);
    PopExpression(arg2);
    PopExpression(arg3);
    if (type2 != 0) {
      PopExpression(arg4);
      PopExpression(arg5);
      PopExpression(arg6);
      PopExpression(arg7);
    }
  }
}
VmInstruction(InstUnk1037MO7) {
  StartInstruction;
  PopUint8(type);
}
VmInstruction(InstUnk1037) {
  StartInstruction;
  PopExpression(arg1);
  PopExpression(arg2);
  PopExpression(arg3);
  ImpLogSlow(LL_Warning, LC_VMStub,
             "STUB instruction Unk1037(arg1: %i, arg2: %i, arg3: %i)\n", arg1,
             arg2, arg3);
}
VmInstruction(InstMapSystem) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 1:
      Impacto::UI::MapSystem::MapInit();
      break;
    case 2: {
      PopExpression(arg1);
      PopExpression(arg2);
      Impacto::UI::MapSystem::MapSetFadein(arg1, arg2);
    } break;
    case 3: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MapSetGroup(arg1: %i, arg2: %i, arg3: %i, "
                 "arg4: %i)\n",
                 arg1, arg2, arg3, arg4);
      Impacto::UI::MapSystem::MapSetGroup(arg1, arg2, arg3, arg4);
    } break;
    case 4: {
      PopExpression(arg1);
      PopExpression(arg2);
      Impacto::UI::MapSystem::MapSetFadeout(arg1, arg2);
    } break;
    case 5: {
      PopExpression(arg1);
      PopExpression(arg2);
      Impacto::UI::MapSystem::MapSetDisp(arg1, arg2);
    } break;
    case 6: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MapSetHide(arg1: %i, arg2: %i)\n", arg1,
                 arg2);
      Impacto::UI::MapSystem::MapSetHide(arg1, arg2);
    } break;
    case 7:
      if (!Impacto::UI::MapSystem::MapFadeEndChk_Wait()) {
        ResetInstruction;
        BlockThread;
      }
      break;
    case 8: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      ImpLogSlow(
          LL_Warning, LC_VMStub,
          "STUB instruction MapMoveAnimeInit(arg1: %i, arg2: %i, arg3: %i)\n",
          arg1, arg2, arg3);
      Impacto::UI::MapSystem::MapMoveAnimeInit(arg1, arg2, arg3);
    } break;
    case 9:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction MapMoveAnimeMain\n");
      if (!Impacto::UI::MapSystem::MapMoveAnimeMain()) {
        ResetInstruction;
        BlockThread;
      }
      break;
    case 0xA: {
      PopExpression(arg1);
      PopExpression(arg2);
      Impacto::UI::MapSystem::MapGetPos(arg1, arg2, ScrWork[6365],
                                        ScrWork[6366]);

    } break;
    case 0xB: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      Impacto::UI::MapSystem::MapSetPool(arg2 + arg1 * 10, arg3, arg4);
    } break;
    case 0xC: {
      PopExpression(arg1);
      Impacto::UI::MapSystem::MapResetPoolAll(arg1);
    } break;
    case 0xD:
      if (!Impacto::UI::MapSystem::MapPoolFadeEndChk_Wait()) {
        ResetInstruction;
        BlockThread;
      }
      break;
    case 0xE: {
      PopExpression(arg1);
      Impacto::UI::MapSystem::MapPoolShuffle(arg1);
    } break;
    case 0xF: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MapPoolSetDisp(arg1: %i, arg2: %i)\n", arg1,
                 arg2);
      Impacto::UI::MapSystem::MapPoolSetDisp(arg1, arg2);
    } break;
    case 0x10: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MapPoolSetHide(arg1: %i, arg2: %i)\n", arg1,
                 arg2);
      Impacto::UI::MapSystem::MapPoolSetHide(arg1, arg2);
    } break;
    case 0x11: {
      PopExpression(arg1);
      PopExpression(arg2);
      Impacto::UI::MapSystem::MapPoolSetFadein(arg1, arg2);
    } break;
    case 0x12: {
      PopExpression(arg1);
      PopExpression(arg2);
      Impacto::UI::MapSystem::MapPoolSetFadeout(arg1, arg2);
    } break;
    case 0x13: {
      PopExpression(arg1);
      if (!Impacto::UI::MapSystem::MapPlayerPhotoSelect(arg1)) {
        ResetInstruction;
        BlockThread;
      }
    } break;
    case 0x14: {
      PopExpression(arg1);
      PopExpression(arg2);
      Impacto::UI::MapSystem::MapResetPool(arg1 * 10 + arg2);
    } break;
    case 0x15: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      ImpLogSlow(
          LL_Warning, LC_VMStub,
          "STUB instruction MapSetGroupEx(arg1: %i, arg2: %i, arg3: %i)\n",
          arg1, arg2, arg3);
      Impacto::UI::MapSystem::MapSetGroupEx(arg1, arg2, arg3);
    } break;
    case 0x16: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MapZoomInit(arg1: %i, arg2: %i, arg3: %i)\n",
                 arg1, arg2, arg3);
      if (arg1 != ScrWork[6363] || arg2 != ScrWork[6364] ||
          arg3 != ScrWork[6362]) {
        Impacto::UI::MapSystem::MapZoomInit(arg1, arg2, arg3);
      } else {
        thread->Ip += 3;
      }
    } break;
    case 0x17:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction MapZoomMain\n");
      if (!Impacto::UI::MapSystem::MapZoomMain()) {
        ResetInstruction;
        BlockThread;
      }
      break;
    case 0x18: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      ImpLogSlow(
          LL_Warning, LC_VMStub,
          "STUB instruction MapZoomInit2(arg1: %i, arg2: %i, arg3: %i)\n", arg1,
          arg2, arg3);
      if (arg1 != ScrWork[6363] || arg2 != ScrWork[6364] ||
          arg3 != ScrWork[6362]) {
        Impacto::UI::MapSystem::MapZoomInit2(arg1, arg2);
      } else {
        thread->Ip += 3;
      }
    } break;
    case 0x19:
      if (!Impacto::UI::MapSystem::MapZoomMain3()) {
        ResetInstruction;
        BlockThread;
      }
      break;
    case 0x1A: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      if (arg1 != ScrWork[6363] || arg2 != ScrWork[6364] ||
          arg3 != ScrWork[6362]) {
        if (!Impacto::UI::MapSystem::MapZoomInit3(arg1, arg2, arg3)) {
          thread->Ip += 3;
        }
      } else {
        thread->Ip += 3;
      }
    } break;
    case 0x1B: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      if (arg1 != ScrWork[6363] || arg2 != ScrWork[6364] ||
          arg3 != ScrWork[6362]) {
        if (!Impacto::UI::MapSystem::MapMoveAnimeInit2(arg1, arg2, arg3)) {
          thread->Ip += 3;
        }
      } else {
        thread->Ip += 3;
      }
    } break;
    case 0x1C:
      if (!Impacto::UI::MapSystem::MapMoveAnimeMain2()) {
        ResetInstruction;
        BlockThread;
      }
      break;
    case 0x1E:
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MapPlayerPotalSelectInit\n");
      Impacto::UI::MapSystem::MapPlayerPotalSelectInit();
      break;
    case 0x1F:
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MapPlayerPotalSelect\n");
      if (!Impacto::UI::MapSystem::MapPlayerPotalSelect()) {
        ResetInstruction;
        BlockThread;
      }
      break;
    case 0x28:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction MapSystem_28\n");
      Impacto::UI::MapSystem::MapSystem_28();
      break;
  }
}
VmInstruction(InstPhoneSG) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0: {
      PopUint8(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Unk1037(arg1: %i, arg2: %i)\n", arg1, arg2);
      break;
    }
    case 1: {
      PopUint8(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Unk1037(arg1: %i, arg2: %i)\n", arg1, arg2);
      break;
    }
    case 2: {
      PopUint8(arg1);
      PopExpression(arg2);
      PopUint16(arg3);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Unk1037(arg1: %i, arg2: %i, arg3: %i)\n",
                 arg1, arg2, arg3);
      break;
    }
    case 3: {
      PopUint8(arg1);
      PopExpression(arg2);
      PopUint16(arg3);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Unk1037(arg1: %i, arg2: %i, arg3: %i)\n",
                 arg1, arg2, arg3);
      if (GetFlag(SF_Phone_Open)) {
        ScrWork[SW_PHONE_DISP_CT] = 20;
      } else {
        ScrWork[SW_PHONE_DISP_CT] = 0;
      }
      break;
    }
    case 4: {
      PopUint16(arg1);
      PopUint16(arg2);
      PopUint16(arg3);
      PopUint16(arg4);
      PopUint16(arg5);
      PopUint16(arg6);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction CHAmoveSetSeqDirect(arg1: %i, arg2: %i, "
                 "arg3: %i, arg4: %i, arg5: %i, arg6: %i)\n",
                 arg1, arg2, arg3, arg4, arg5, arg6);
      break;
    }
    case 5: {  // PhoneInit
      break;
    }
    case 15: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Unk1037(arg1: %i)\n",
                 arg1);
      break;
    }
    case 18: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Unk1037(arg1: %i, arg2: %i)\n", arg1, arg2);
      break;
    }
  }
}
VmInstruction(InstMail) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
    case 1:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
    case 2:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
    case 3: {
      PopLocalLabel(label1);
      (void)label1;
      PopLocalLabel(label2);
      (void)label2;
      PopLocalLabel(label3);
      (void)label3;
      PopLocalLabel(label4);
      (void)label4;
      PopLocalLabel(label5);
      (void)label5;
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
    } break;
    case 20:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
    case 21: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Mail(type: %i, arg1: %i, arg2: %i, arg3: "
                 "%i, arg4: %i)\n",
                 type, arg1, arg2, arg3, arg4);
    } break;
    case 22: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Mail(type: %i, arg1: %i, arg2: %i, arg3: "
                 "%i, arg4: %i)\n",
                 type, arg1, arg2, arg3, arg4);
    } break;
    case 40:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
    case 50:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
    case 51:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
    case 60:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
    case 61: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Mail(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 70:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
    case 71: {
      PopLocalLabel(label1);
      (void)label1;
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
    } break;
    case 72: {
      PopLocalLabel(label1);
      (void)label1;
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
    } break;
    case 73:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
    case 74:
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mail(type: %i)\n",
                 type);
      break;
  }
}
VmInstruction(InstUnk1038Darling) {
  StartInstruction;
  PopUint8(type);
  if (type == 0) {
    PopUint16(arg1);
    (void)arg1;
  }
}
VmInstruction(InstUnk1038MO7) {
  StartInstruction;
  PopExpression(arg1);
  PopExpression(arg2);
  ImpLogSlow(LL_Warning, LC_VMStub,
             "STUB instruction Unk1038MO7(arg1: %i, arg2: %i)\n", arg1, arg2);
}
VmInstruction(InstTwipo) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0: {
      PopLocalLabel(label1);
      (void)label1;
      PopLocalLabel(label2);
      (void)label2;
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Twipo(type: %i)\n",
                 type);
    } break;
    case 1: {
    } break;
    case 2: {
      PopExpression(arg1);
      PopLocalLabel(label1);
      (void)label1;
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 3: {
      PopExpression(arg1);
      PopLocalLabel(label1);
      (void)label1;
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 4: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 5: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 6: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 7: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 10: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 11: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
  }
}
VmInstruction(InstTwipo_Dash) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0: {
      PopLocalLabel(label1);
      (void)label1;
      PopLocalLabel(label2);
      (void)label2;
      PopLocalLabel(label3);
      (void)label3;
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Twipo(type: %i)\n",
                 type);
    } break;
    case 1:
    case 11:
    case 12:
      break;
    case 2: {
      PopExpression(arg1);
      PopLocalLabel(label1);
      (void)label1;
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 3: {
      PopExpression(arg1);
      PopLocalLabel(label1);
      (void)label1;
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 4: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 5: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 6: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 7: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
    case 10: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Twipo(type: %i, arg1: %i)\n", type, arg1);
    } break;
  }
}
VmInstruction(InstDelusionTriggerCHLCC) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 1: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction DelusionTriggerCHLCC(type: %i)\n", type);
      DelusionTrigger::Show();
    } break;
    case 2: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction DelusionTriggerCHLCC(type: %i)\n", type);
      BlockThread;
    } break;
    case 4: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction DelusionTriggerCHLCC(type: %i)\n", type);
    } break;
    case 5: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction DelusionTriggerCHLCC(type: %i)\n", type);
    } break;
    case 6: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction DelusionTriggerCHLCC(type: %i)\n", type);
      DelusionTrigger::Hide();
    } break;
    case 7: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction DelusionTriggerCHLCC(type: %i)\n", type);
      BlockThread;
    } break;
  }
}
VmInstruction(InstUnk103A) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Unk103A(type: %i, arg1: %i, arg2: %i)\n",
                 type, arg1, arg2);
    } break;
    case 1: {
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Unk103A(type: %i)\n",
                 type);
    } break;
    case 2: {
      SetFlag(2951, 1);  // Always win KillBallad
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Unk103A(type: %i)\n",
                 type);
    } break;
  }
}
VmInstruction(InstUnk1037Noah) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0x0: {
      PopExpression(arg1);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_00\n");
    } break;
    case 0x1: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_01\n");
    } break;
    case 0x2: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_01\n");
    } break;
    case 0x3: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_03");
    } break;
    case 0x4: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_04");
    } break;
    case 0x5: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_05");
    } break;
    case 0x6: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_06");
    } break;
    case 0x7: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_07");
    } break;
    case 0x8: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_08");
    } break;
    case 0x9: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_09");
    } break;
    case 0xA: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopExpression(arg5);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_0A");
    } break;
    case 0xB: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopExpression(arg5);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_0B");
    } break;
    case 0xC: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_0C");
    } break;
    case 0xD: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_0D");
    } break;
    case 0xE: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopExpression(arg5);
      PopExpression(arg6);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_0E");
    } break;
    case 0xF: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_0F");
    } break;
    case 0x10: {
      PopExpression(arg1);
      PopExpression(arg2);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_10");
    } break;
    case 0x11: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_13");
    } break;
    case 0x12: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopExpression(arg5);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_12");
    } break;
    case 0x13: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopExpression(arg5);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_13");
    } break;
    case 0x14: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_14");
    } break;
    case 0x15: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_05");
    } break;
    case 0x16: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_16");
    } break;
    case 0x17: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_07");
    } break;
    case 0x18: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_18");
    } break;
    case 0x19: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_19");
    } break;
    case 0x1A: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_1A");
    } break;
    case 0x1B: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_1B");
    } break;
    case 0x1C: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_1C");
    } break;
    case 0x1E: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_1E");
    } break;
    case 0x1F: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_1F");
    } break;
    case 0x20: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_20");
    } break;
    case 0x21: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_21");
    } break;
    case 0x22: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_22");
    } break;
    case 0x28: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_28");
    } break;
    case 0x29: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_29");
    } break;
    case 0x2A: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_2A");
    } break;
    case 0x2B: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_2B");
    } break;
    case 0x2C: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_2C");
    } break;
    case 0x52: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopExpression(arg5);
      PopExpression(arg6);
      PopExpression(arg7);
      PopExpression(arg8);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_53");
    } break;
    case 0x53: {
      PopExpression(arg1);
      PopExpression(arg2);
      PopExpression(arg3);
      PopExpression(arg4);
      PopExpression(arg5);
      PopExpression(arg6);
      PopExpression(arg7);
      PopExpression(arg8);
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_53");
    } break;
    case 0x78: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_78");
    } break;
    case 0x81: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_81");
    } break;
    case 0x8C: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_8C");
    } break;
    case 0x8D: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_8D");
    } break;
    case 0x8E: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_8E");
    } break;
    case 0x8F: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_8F");
    } break;
    case 0x90: {
      ImpLogSlow(LL_Warning, LC_VMStub, "1037_90");
    } break;
  }
}
VmInstruction(InstMtrg) {
  StartInstruction;
  PopUint8(type);
  switch (type) {
    case 0: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MtrgStart(type: %i)\n", type);
      DelusionTrigger::Show();
    } break;
    case 1: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MtrgEnd_Wait(type: %i)\n", type);
      DelusionTrigger::Hide();
    } break;
    case 2: {
      ImpLogSlow(LL_Warning, LC_VMStub, "STUB instruction Mtrg_02(type: %i)\n",
                 type);
    } break;
    case 3: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MtrgStop_Wait(type: %i)\n", type);
      DelusionTrigger::Hide();
    } break;
    case 4: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction Mtrg_04_Wait(type: %i)\n", type);
      BlockThread;
    } break;
    case 5: {
      ImpLogSlow(LL_Warning, LC_VMStub,
                 "STUB instruction MtrgSetEvent(type: %i)\n", type);
      BlockThread;
    } break;
  }
}

}  // namespace Vm

}  // namespace Impacto