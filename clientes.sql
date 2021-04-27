create database clientes;
use clientes;
create table clientes(
Id_cliente int ,
nit int ,
nombres varchar (50),
apellidos varchar(50),
direccion varchar(50),
telefono int ,
fecha_naciminento date
);
insert into clientes values(1,3245678,'edward','lopez','ciudad quetzal',35490833,'2020/04/12');
select *from clientes;