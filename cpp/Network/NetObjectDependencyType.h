// Object: NetObjectDependencyType
// RuntimeId: 54962
// TypeInfo: 0x0000000144EA5450

namespace Network {
    enum NetObjectDependencyType {
        NetObjectDependencyType_None = 0,
        NetObjectDependencyType_Init = 1,
        NetObjectDependencyType_InitFlushDependencyFirst = 2,
        NetObjectDependencyType_ResolveBeforeSend = 3,
        NetObjectDependencyType_SendDependencyFirst = 4,
        NetObjectDependencyType_FlushDependencyFirst = 5,
        NetObjectDependencyType_ResolveOnRemote = 6
    };
}