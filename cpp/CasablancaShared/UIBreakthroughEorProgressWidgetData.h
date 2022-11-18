// Object: UIBreakthroughEorProgressWidgetData
// ClassId: 3808
// RuntimeId: 51438
// TypeInfo: 0x0000000144D9BF10
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIBreakthroughEorProgressWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Float32 ScoreProgress; // 0x80
        char pad_0x84[0x4];
        CString Team1FactionIconTextureId; // 0x88
        CString Team2FactionIconTextureId; // 0x90
        Float32 SectorIconSize; // 0x98
        Float32 SectorAlpha; // 0x9C
        Float32 MasterFade; // 0xA0
        Int32 NumSubDivisions; // 0xA4
        CString BattalionLostIconTextureId; // 0xA8
        Float32 BattalionScale; // 0xB0
        Boolean ShowSectorStatus; // 0xB4
        Boolean ContestedSectorPulseTrain; // 0xB5
        Boolean ShowBattalionsLeft; // 0xB6
        char pad_0xB7[0x9];
    }; // 0xC0
    static_assert(sizeof(UIBreakthroughEorProgressWidgetData) == 0xC0);
}
#pragma pack(pop)