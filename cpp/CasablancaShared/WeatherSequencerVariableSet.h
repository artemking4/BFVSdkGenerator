// Object: WeatherSequencerVariableSet
// ClassId: 845
// RuntimeId: 13303
// TypeInfo: 0x0000000144CFB050
#include "../Entity/TreeBase.h"
#include "../CasablancaShared/WSVariableCategory.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatherSequencerVariableSet : public Entity::TreeBase {
        Array<CasablancaShared::WSVariableCategory> VariableCategories; // 0x20
    }; // 0x28
    static_assert(sizeof(WeatherSequencerVariableSet) == 0x28);
}
#pragma pack(pop)