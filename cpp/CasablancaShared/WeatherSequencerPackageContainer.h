// Object: WeatherSequencerPackageContainer
// ClassId: 844
// RuntimeId: 27821
// TypeInfo: 0x0000000144CFB0D0
#include "../Entity/TreeBase.h"
#include "../CasablancaShared/WSLevelSetup.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeatherSequencerPackageContainer : public Entity::TreeBase {
        Array<CasablancaShared::WSLevelSetup> LevelSetups; // 0x20
    }; // 0x28
    static_assert(sizeof(WeatherSequencerPackageContainer) == 0x28);
}
#pragma pack(pop)