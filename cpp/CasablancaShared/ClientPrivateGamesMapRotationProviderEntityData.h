// Object: ClientPrivateGamesMapRotationProviderEntityData
// ClassId: 2503
// RuntimeId: 4549
// TypeInfo: 0x0000000144D65870
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/PrivateGamesBlueprint.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientPrivateGamesMapRotationProviderEntityData : public Entity::EntityData {
        CasablancaShared::PrivateGamesBlueprint BlueprintReader; // 0x20
        Int32 GameSizeFilter; // 0x28
        char pad_0x2C[0x4];
        CString GameModeFilter; // 0x30
        CString LevelFilter; // 0x38
        Boolean FilterOnGameSize; // 0x40
        Boolean FilterOnGameMode; // 0x41
        Boolean FilterOnLevel; // 0x42
        Boolean EnableSorting; // 0x43
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(ClientPrivateGamesMapRotationProviderEntityData) == 0x48);
}
#pragma pack(pop)