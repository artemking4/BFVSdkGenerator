// Object: SupportedShootingComponentData
// ClassId: 1858
// RuntimeId: 45386
// TypeInfo: 0x0000000144C7E880
#include "../Entity/GameComponentData.h"
#include "../Casablanca/SupportedShootingCommonData.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SupportedShootingComponentData : public Entity::GameComponentData {
        Casablanca::SupportedShootingCommonData CommonData; // 0x80
        Array<Int32> ExitActions; // 0x88
    }; // 0x90
    static_assert(sizeof(SupportedShootingComponentData) == 0x90);
}
#pragma pack(pop)