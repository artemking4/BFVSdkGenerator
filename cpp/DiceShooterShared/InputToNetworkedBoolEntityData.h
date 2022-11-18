// Object: InputToNetworkedBoolEntityData
// ClassId: 2806
// RuntimeId: 30667
// TypeInfo: 0x0000000144DEDFA0
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class InputToNetworkedBoolEntityData : public Entity::EntityData {
        Int32 InputAction; // 0x20
        Boolean Enabled; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(InputToNetworkedBoolEntityData) == 0x28);
}
#pragma pack(pop)