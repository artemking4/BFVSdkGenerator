// Object: BFUIElementFrontlineLineEntityData
// ClassId: 3653
// RuntimeId: 213
// TypeInfo: 0x0000000144D9C610
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIFrontlineCapturePointList.h"
#include "../Global/Float32.h"
#include "../DecalBase/DecalVolumeEntityData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementFrontlineLineEntityData : public CasablancaShared::BFUIElementEntityData {
        CasablancaShared::BFUIFrontlineCapturePointList CapturePointList; // 0x130
        Float32 LineWidth; // 0x138
        Float32 Opacity; // 0x13C
        Float32 VolumeLineWidth; // 0x140
        Float32 VolumeHeight; // 0x144
        DecalBase::DecalVolumeEntityData DecalVolumeData; // 0x148
        Boolean Test; // 0x150
        Boolean FadeLineAtEnemeyBase; // 0x151
        Boolean UseDecalVolumes; // 0x152
        char pad_0x153[0xD];
    }; // 0x160
    static_assert(sizeof(BFUIElementFrontlineLineEntityData) == 0x160);
}
#pragma pack(pop)