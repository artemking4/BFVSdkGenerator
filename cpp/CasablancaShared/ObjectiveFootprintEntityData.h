// Object: ObjectiveFootprintEntityData
// ClassId: 3375
// RuntimeId: 31877
// TypeInfo: 0x0000000144D098B0
#include "../CasablancaShared/FootprintEntityData.h"
#include "../CasablancaShared/ObjectiveFootprintSettings.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ObjectiveFootprintEntityData : public CasablancaShared::FootprintEntityData {
        Array<CasablancaShared::ObjectiveFootprintSettings> Footprints; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(ObjectiveFootprintEntityData) == 0x90);
}
#pragma pack(pop)