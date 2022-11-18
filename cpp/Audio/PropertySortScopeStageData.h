// Object: PropertySortScopeStageData
// ClassId: 4676
// RuntimeId: 21473
// TypeInfo: 0x0000000144E016F0
#include "../Audio/SoundScopeStageData.h"
#include "../Global/Uint32.h"
#include "../Audio/ScopeStageSortProperty.h"
#include "../Audio/PropertySortScopeStageOrder.h"

#pragma pack(push, 8)
namespace Audio {
    class PropertySortScopeStageData : public Audio::SoundScopeStageData {
        Uint32 Count; // 0x18
        Audio::ScopeStageSortProperty Property; // 0x1C
        Audio::PropertySortScopeStageOrder Order; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PropertySortScopeStageData) == 0x28);
}
#pragma pack(pop)