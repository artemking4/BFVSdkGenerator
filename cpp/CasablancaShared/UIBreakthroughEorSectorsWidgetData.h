// Object: UIBreakthroughEorSectorsWidgetData
// ClassId: 3838
// RuntimeId: 30131
// TypeInfo: 0x0000000144D9BF90
#include "../CasablancaShared/UIShapeBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIBreakthroughEorSectorsWidgetData : public CasablancaShared::UIShapeBaseData {
        Float32 SectorAlpha; // 0x90
        char pad_0x94[0x4];
        CString Team1FactionIconTextureId; // 0x98
        CString Team2FactionIconTextureId; // 0xA0
        Float32 SectorIconSize; // 0xA8
        Boolean ShowSectorStatus; // 0xAC
        Boolean ContestedSectorPulseTrain; // 0xAD
        char pad_0xAE[0x2];
    }; // 0xB0
    static_assert(sizeof(UIBreakthroughEorSectorsWidgetData) == 0xB0);
}
#pragma pack(pop)