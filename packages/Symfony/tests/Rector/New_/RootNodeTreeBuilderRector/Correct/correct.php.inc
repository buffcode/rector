<?php

namespace Rector\Symfony\Tests\Rector\New_\RootNodeTreeBuilderRector\Wrong;

use Rector\Symfony\Tests\Rector\New_\RootNodeTreeBuilderRector\Source\TreeBuilder;

$treeBuilder = new TreeBuilder('acme_root');
$rootNode = $treeBuilder->getRootNode();
$rootNode->someCall();

$treeBuilder = new TreeBuilder('already_root');
$rootNode = $treeBuilder->root();
$rootNode->someCall();
