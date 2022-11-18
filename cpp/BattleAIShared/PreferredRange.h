// Object: PreferredRange
// ClassId: 4462
// RuntimeId: 51057
// TypeInfo: 0x0000000144C07360
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class PreferredRange : public Core::DataContainer {
        Float32 Start; // 0x18
        Float32 Ideal; // 0x1C
        Float32 End; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PreferredRange) == 0x28);
}
#pragma pack(pop)