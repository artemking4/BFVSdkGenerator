// Object: ClientAttachableFlameEntity
// ClassId: 7904
// RuntimeId: 50845
// TypeInfo: 0x0000000144C90CA0
#include "../Weapon/ClientProjectileEntity.h"

namespace Casablanca {
    class ClientAttachableFlameEntity : public Weapon::ClientProjectileEntity {
        char pad_0x270[0x1A0];
    }; // 0x410
    static_assert(sizeof(ClientAttachableFlameEntity) == 0x410);
}