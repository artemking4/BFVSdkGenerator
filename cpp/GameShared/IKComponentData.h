// Object: IKComponentData
// ClassId: 1789
// RuntimeId: 37097
// TypeInfo: 0x0000000144E8D4E0
#include "../Entity/GameComponentData.h"
#include "../GameShared/IKEffectorEnum.h"
#include "../GameShared/HIKData.h"

#pragma pack(push, 16)
namespace GameShared {
    class IKComponentData : public Entity::GameComponentData {
        GameShared::IKEffectorEnum IKEffector; // 0x80
        GameShared::HIKData IKData; // 0x84
        char pad_0x94[0xC];
    }; // 0xA0
    static_assert(sizeof(IKComponentData) == 0xA0);
}
#pragma pack(pop)