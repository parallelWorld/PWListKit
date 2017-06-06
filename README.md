## 使用
```
pod 'PWListKit', :git => 'https://github.com/parallelWorld/PWListKit.git', :tag => '0.0.1'
```


PWListKit完成的功能


## 未实现的功能

## 已经实现的功能
- 指定cellClass即可自动注册cell的class或者nib，无需指定注册类型。当有cell的同名nib时，调用是`registerNib`方法，否则调用`registerClass`方法。
- 可重用tableView的cell、header和footer
- cell、header和footer可自动算高
- 方便实现tableView和collectionView，实现数据驱动UI
- 实现emptyView

## 参考链接
- https://github.com/forkingdog
- https://github.com/NianJi/NJEasyTable
- https://github.com/rickytan/RTComponentTableView
- https://xcoder.tips/a-componentized-uitableivew/
- https://github.com/parallelWorld/IGListKit
